import SwiftUI
import vaccination_tracker

struct StateVaccinationDataView: View {
    var vaccinationData: CovidVaccinationData

    var body: some View {
        HStack() {
            VStack(alignment: .leading, spacing: 10.0) {
                Text("\(vaccinationData.state)")
                Text("First dose: \(vaccinationData.firstDose)")
                Text("First dose percentage: \(vaccinationData.firstDosePercentage / 100)%")
            }
            Spacer()
        }
    }
}


