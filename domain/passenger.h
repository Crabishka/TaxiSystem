
#ifndef UNTITLED_PASSENGER_H
#define UNTITLED_PASSENGER_H


#include <xstring>
#include "station.h"
#include "taxi_base.h"

namespace TaxiSystem {

    class Passenger {
    public:
        Passenger(const std::string &name, TaxiSystem::Station *target);

        bool isRouteRight(Taxi_base *taxi);

        std::string getName();

        TaxiSystem::Station *getTarget();

    private:
        std::string name;
        TaxiSystem::Station *target;
    };

}


#endif //UNTITLED_PASSENGER_H
