

#ifndef UNTITLED_TAXI_BASE_H
#define UNTITLED_TAXI_BASE_H
#pragma once

#include "passenger.h"
#include "route.h"

namespace TaxiSystem {

    class Taxi_base {

        virtual void move() = 0;
    public:
        virtual TaxiSystem::Station* getCurrentStation() = 0;

        virtual ~Taxi_base() = default;

        virtual TaxiSystem::Route *getRoute() = 0;

    };


}


#endif //UNTITLED_TAXI_BASE_H
