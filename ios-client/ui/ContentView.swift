import vaccination_tracker
import SwiftUI

struct ContentView: View {
  @ObservedObject private(set) var viewModel: ViewModel

    var body: some View {
        NavigationView {
            listView().navigationBarTitle("Vaccination Data")
                    .navigationBarItems(trailing:
            Button("Reload") {
                viewModel.loadArticles(forceReload: true)
            })
        }
    }

    private func listView() -> AnyView {
        switch viewModel.data {
        case .loading:
            return AnyView(Text("Loading...").multilineTextAlignment(.center))
        case .result(let vaccinationData):
            return AnyView(List(vaccinationData) { (item) in
                StateVaccinationDataView(vaccinationData: item)
            })
        case .error(let description):
            return AnyView(Text(description).multilineTextAlignment(.center))
        }
    }
}

