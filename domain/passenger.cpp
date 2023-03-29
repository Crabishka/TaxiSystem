

#include "passenger.h"


TaxiSystem::Passenger::Passenger(const std::string &name, TaxiSystem::Station *target) : name(name), target(target) {}


bool TaxiSystem::Passenger::isRouteRight(Taxi_base *taxi) {
    Station *taxiStation = taxi->getCurrentStation();
    std::list<TaxiSystem::Station *> stations = taxi->getRoute()->getPath();
    auto iter = stations.begin();
    while (iter != stations.end()) {
        if (this->target == *iter) {
            return true;
        }
        iter++;
    }
    return false;
}

std::string TaxiSystem::Passenger::getName() {
    return name;
}
