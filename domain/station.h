

#ifndef UNTITLED_STATION_H
#define UNTITLED_STATION_H
#pragma once

#include <vector>
#include <xstring>
#include "passenger.h"

namespace TaxiSystem {

    class Station {
    public:
        ~Station() = default;

        explicit Station(const std::string &name);


    private:
        std::vector<Passenger *> passengers;
        std::string name;
    };



}


#endif //UNTITLED_STATION_H
