#include <iostream>
using namespace std;

int main() {
    double fuelTankCapacity;
    double fuelEfficiency;
    double costPerGallon = 3.10;

    cout << "Enter fuel efficiency (miles per gallon): ";
    cin >> fuelEfficiency;

    cout << "Enter fuel tank capacity (gallons): ";
    cin >> fuelTankCapacity;

    double totalCost = fuelTankCapacity * costPerGallon;
    double milesPossible = fuelTankCapacity * fuelEfficiency;

    cout << "Cost to fill the tank: $" << totalCost << endl;
    cout << "Miles possible on a full tank: " << milesPossible
        << " miles" << endl;

    return 0;
}