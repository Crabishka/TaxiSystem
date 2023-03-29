


#ifndef UNTITLED_ROUTE_H
#define UNTITLED_ROUTE_H
#pragma once
#include <vector>
#include <list>
#include "passenger.h"
#include "station.h"

namespace TaxiSystem {

    class Route {
    public:
        ~Route();
        std::list<TaxiSystem::Station *> getPath();
        void setStations(std::list<TaxiSystem::Station *> list);
    private:
        std::list<TaxiSystem::Station*> path;
    };
}




#endif //UNTITLED_ROUTE_H
