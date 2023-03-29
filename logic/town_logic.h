

#ifndef UNTITLED_TOWN_LOGIC_H
#define UNTITLED_TOWN_LOGIC_H


#include <list>
#include "../domain/station.h"
#include "../domain/classic_taxi.h"

namespace TaxiSystem {
    class town_logic {
    public:
        town_logic();
        void start();
        void createStation(Station *station);
        void createRoute(Route* route);
        void createTaxi(unsigned int capacity, TaxiSystem::Route* route);

    private:
        std::list<Station *> stations;
        std::list<Route *> routes;
        std::list<Classic_taxi *> taxiList;

        void doMove(Classic_taxi *taxi);


    };
}


#endif //UNTITLED_TOWN_LOGIC_H
