

#include "classic_taxi.h"


TaxiSystem::Route *TaxiSystem::Classic_taxi::getRoute() {
    return route;
}

bool TaxiSystem::Classic_taxi::deletePassenger(TaxiSystem::Passenger *passenger) {
    auto iter = std::find(passengers.begin(), passengers.end(), passenger);
    if (iter != passengers.end()) {
        passengers.remove(passenger);
        return true;
    }
    return false;
}

bool TaxiSystem::Classic_taxi::addPassenger(TaxiSystem::Passenger *passenger) {
    passengers.push_back(passenger);
}

TaxiSystem::Classic_taxi::Classic_taxi(const unsigned int capacity, TaxiSystem::Route *route) : capacity(capacity),
                                                                                                route(route) {}

void TaxiSystem::Classic_taxi::move() {
    std::list<Station *> stations = route->getPath();
    auto iter = std::find(stations.begin(), stations.end(), currentStation);
    if (*iter == stations.back()) {
        currentStation = route->getPath().front();
    } else {
        currentStation = (*iter + 1);
    }
}

TaxiSystem::Station *TaxiSystem::Classic_taxi::getCurrentStation() {
    return currentStation;
}


