

#include "town_logic.h"

void TaxiSystem::town_logic::createStation(std::string name) {
    stations.push_back(new Station(name));
}


void TaxiSystem::town_logic::createTaxi(unsigned int capacity, TaxiSystem::Route *route) {
    taxiList.push_back(new Classic_taxi(capacity, route));
}

void TaxiSystem::town_logic::createRoute(TaxiSystem::Route *route) {
    routes.push_back(route);
}

TaxiSystem::town_logic::town_logic() {}
