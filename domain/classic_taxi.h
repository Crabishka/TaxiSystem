

#ifndef UNTITLED_CLASSIC_TAXI_H
#define UNTITLED_CLASSIC_TAXI_H

#include "taxi_base.h"
#include <list>

namespace TaxiSystem {
    class Classic_taxi : public Taxi_base {


    public:


        Classic_taxi(const unsigned int capacity, Route *route);

        void move() override;

        TaxiSystem::Station *getCurrentStation() override;

        Route *getRoute() override;

        bool deletePassenger(TaxiSystem::Passenger *passenger);

        bool addPassenger(TaxiSystem::Passenger *passenger);

    private:

        Station *currentStation;
        const unsigned int capacity;
        TaxiSystem::Route *route;
        std::list<TaxiSystem::Passenger *> passengers;
    };


}


#endif //UNTITLED_CLASSIC_TAXI_H
