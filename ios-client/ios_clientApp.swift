//
//  ios_clientApp.swift
//  ios-client
//
//  Created by Iury on 28/06/21.
//

import SwiftUI
import kmmpoc

@main
struct ios_clientApp: App {
    let sdk = HackerNewsSDK(databaseDriverFactory: DatabaseDriverFactory())

    var body: some Scene {
        WindowGroup {
            ContentView(viewModel: .init(sdk: sdk))
        }
    }
}
