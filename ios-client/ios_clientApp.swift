import SwiftUI
import vaccination_tracker

@main
struct ios_clientApp: App {
    let sdk = VaccinationTracker(databaseDriverFactory: DatabaseDriverFactory())

    var body: some Scene {
        WindowGroup {
            ContentView(viewModel: ViewModel(sdk: sdk))
        }
    }
}
