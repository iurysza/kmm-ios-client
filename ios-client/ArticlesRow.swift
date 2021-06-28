

import SwiftUI
import kmmpoc

struct ArticlesRow: View {
    var article: HitStore

    var body: some View {
        HStack() {
            VStack(alignment: .leading, spacing: 10.0) {
                Text("Article title: \(article.title)")
                Text("Article url: \(article.url)")
            }
            Spacer()
        }
    }
}


