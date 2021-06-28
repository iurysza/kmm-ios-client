import kmmpoc
import SwiftUI

struct ContentView: View {
  @ObservedObject private(set) var viewModel: ViewModel

    var body: some View {
        NavigationView {
            listView()
            .navigationBarTitle("Articles")
            .navigationBarItems(trailing:
                Button("Reload") {
                    viewModel.loadArticles(forceReload: true)
            })
        }
    }

    private func listView() -> AnyView {
        switch viewModel.articles {
        case .loading:
            return AnyView(Text("Loading...").multilineTextAlignment(.center))
        case .result(let articleList):
            return AnyView(List(articleList) { article in
                ArticlesRow(article: article)
            })
        case .error(let description):
            return AnyView(Text(description).multilineTextAlignment(.center))
        }
    }
}

extension ContentView {

    enum LoadableArticles {
        case loading
        case result([HitStore])
        case error(String)
    }

    class ViewModel: ObservableObject {
        let sdk: HackerNewsSDK
        @Published var articles = LoadableArticles.loading

        init(sdk: HackerNewsSDK) {
            self.sdk = sdk
            print("here")
            loadArticles(forceReload: true)
        }

        func loadArticles(forceReload: Bool) {
            articles = .loading
            sdk.getArticles(forceReload: forceReload, completionHandler: { articles, error in
                if let articles = articles {
                    print(articles)
                    self.articles = .result(articles)
                } else {
                    self.articles = .error(error?.localizedDescription ?? "error")
                }
            })
        }
    }
}

extension HitStore: Identifiable { }
