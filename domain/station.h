

#ifndef UNTITLED_STATION_H
#define UNTITLED_STATION_H


#include <vector>
#include <xstring>
#include "passenger.h"

namespace TaxiSystem {

    class Station {
    public:
        ~Station() = default;
        std::string getName();
        std::list<TaxiSystem::Passenger *> getPassengers();
        explicit Station(const std::string &name);
        bool deletePassenger(Passenger *passenger);

    private:
        std::list<TaxiSystem::Passenger *> passengers;
        std::string name;


    };



}


#endif //UNTITLED_STATION_H
