import Foundation
import vaccination_tracker

enum LoadableArticles {
    case loading
    case result([CovidVaccinationData])
    case error(String)
}

class ViewModel: ObservableObject {
    let sdk: VaccinationTracker
    @Published var data = LoadableArticles.loading

    init(sdk: VaccinationTracker) {
        self.sdk = sdk
        loadArticles(forceReload: true)
    }

    func loadArticles(forceReload: Bool) {
        data = .loading
        sdk.getVaccinationData(latest: forceReload) { (data, error) in
            if let vaccinationData: [CovidVaccinationData] = data {
                self.data = .result(vaccinationData)
            } else {
                self.data = .error(error?.localizedDescription ?? "error")
            }
        }
    }
}

extension CovidVaccinationData: Identifiable {}
