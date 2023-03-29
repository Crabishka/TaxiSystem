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
    std::list<TaxiSystem::Station *> stations1;
    stations1.push_back(station1);
    stations1.push_back(station2);
    std::list<TaxiSystem::Station *> list2 = {station1, station4, station5};
    std::list<TaxiSystem::Station *> list3 = {station1, station2, station3, station4};
    TaxiSystem::Route route;
    route.setStations(station1);

}
