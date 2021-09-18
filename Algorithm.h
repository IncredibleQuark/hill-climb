//
// Created by lkupi on 18.09.2021.
//

#ifndef HILL_CLIMB_ALGORITHM_H
#define HILL_CLIMB_ALGORITHM_H

#include "Location.h"

using namespace std;

namespace hillClimb {
    class Algorithm {
    public:
        vector<hillClimb::Location> Solve(hillClimb::Location basePoint, std::vector<hillClimb::Location> locations);
    };
}


#endif //HILL_CLIMB_ALGORITHM_H
