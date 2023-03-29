


#ifndef UNTITLED_ROUTE_H
#define UNTITLED_ROUTE_H

#include <vector>
#include <list>
#include "passenger.h"
#include "domain/station.h"


namespace TaxiSystem {

    class Route {
    public:
        ~Route();
        std::list<TaxiSystem::Station*> getPath();
        void setStations(std::list<Station*> list);
    private:
        std::list<Station*> path;
    };
}




#endif //UNTITLED_ROUTE_H
