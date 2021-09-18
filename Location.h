//
// Created by lkupi on 18.09.2021.
//

#ifndef HILL_CLIMB_LOCATION_H
#define HILL_CLIMB_LOCATION_H

#include <iostream>

#include "Point.h"

namespace hillClimb {
    class Location {
    public:
        Location(Point position, string label);

        static Location WithRandomPosition(string label);

    public:
        Point Position() const { return position_; }

        string Label() const { return label_; }

    private:
        Point position_;
        string label_;
        static int random_;

    private:
        int static Random();

    };

}


#endif //HILL_CLIMB_LOCATION_H
