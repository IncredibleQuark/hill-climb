//
// Created by lkupi on 19.09.2021.
//

#ifndef HILL_CLIMB_HELPER_H
#define HILL_CLIMB_HELPER_H

#include "Point.h"
#include "Location.h"

namespace hillClimb {

    class Helper {
    public:
        double static DistanceTo(hillClimb::Point pointA, hillClimb::Point pointB);
        double static Evaluate(hillClimb::Location basePoint, std::vector<hillClimb::Location> locations);
        vector<hillClimb::Location> static Exchange(vector<hillClimb::Location>, int index1, int index2);
        void static Visualize(vector<hillClimb::Location> path);

    };
}


#endif //HILL_CLIMB_HELPER_H
