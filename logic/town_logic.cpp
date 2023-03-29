#include "town_logic.h"

void TaxiSystem::town_logic::createStation(TaxiSystem::Station* station) {
    stations.push_back(station);
}


void TaxiSystem::town_logic::createTaxi(unsigned int capacity, TaxiSystem::Route* route) {
    Classic_taxi* taxi = new Classic_taxi(capacity, route);
    Station* station = route->getPath();
    taxi->setStartPoint(station);
    taxiList.push_back(taxi);
}

void TaxiSystem::town_logic::createRoute(TaxiSystem::Route *route) {
    routes.push_back(route);
}

TaxiSystem::town_logic::town_logic() {}

void TaxiSystem::town_logic::start() {
    for (auto taxi : taxiList){
        doMove(taxi);
    }
}

void TaxiSystem::town_logic::doMove(TaxiSystem::Classic_taxi* taxi) {
    std::list<TaxiSystem::Passenger*> passengers = taxi->getCurrentStation()->getPassengers();
    for (auto person : taxi->getPassengers()) {
        if (person->getTarget() == taxi->getCurrentStation()){
            taxi->deletePassenger(person);
        }
    }
    for (auto person : passengers) {
        if (person->isRouteRight(taxi) && taxi->canAdd()){
            taxi->addPassenger(person);
            taxi->getCurrentStation()->deletePassenger(person);
        }
    }
}
