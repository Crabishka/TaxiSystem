

#include "route.h"



TaxiSystem::Route::~Route() {

}

std::list<TaxiSystem::Station *> TaxiSystem::Route::getPath() {
    return path;
}


void TaxiSystem::Route::setStations(std::list<TaxiSystem::Station *> list) {
    path = list;
}
