#include "station.h"

TaxiSystem::Station::Station(const std::string &name) {

}

std::string TaxiSystem::Station::getName() {
    return name;
}

std::list<TaxiSystem::Passenger *> TaxiSystem::Station::getPassengers() {
    return passengers;
}

bool TaxiSystem::Station::deletePassenger(TaxiSystem::Passenger* passenger) {
    auto iter = std::find(passengers.begin(), passengers.end(), passenger);
    if (iter != passengers.end()) {
        passengers.remove(passenger);
        return true;
    }
    return false;
}
