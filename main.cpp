#include <iostream>
#include "logic/town_logic.h"
#include "domain/station.h"
#include "domain/route.h"


int main() {
    TaxiSystem::town_logic *logic = new TaxiSystem::town_logic();
    TaxiSystem::Station *station1 = new TaxiSystem::Station("A");
    TaxiSystem::Station *station2 = new TaxiSystem::Station("B");
    TaxiSystem::Station *station3 = new TaxiSystem::Station("C");
    TaxiSystem::Station *station4 = new TaxiSystem::Station("D");
    TaxiSystem::Station *station5 = new TaxiSystem::Station("E");

    std::list<TaxiSystem::Station *> stations1  = {station1, station2};
    std::list<TaxiSystem::Station *> stations2 = {station1, station4, station5};
    std::list<TaxiSystem::Station *> stations3 = {station1, station2, station3, station4};

    TaxiSystem::Route *route1;
    route1->setStations(station1);
    TaxiSystem::Route *route2;
    route1->setStations(station2);
    TaxiSystem::Route *route3;
    route1->setStations(station3);

    logic->createStation(station1);
    logic->createStation(station2);
    logic->createStation(station3);
    logic->createStation(station4);
    logic->createStation(station5);
    logic->createRoute(route1);
    logic->createRoute(route2);
    logic->createRoute(route3);
    logic->createTaxi(5,route1);
    logic->createTaxi(6,route1);
    logic->createTaxi(12,route2);
    logic->createTaxi(4,route3);

    logic->start();
}
