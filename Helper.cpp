//
// Created by lkupi on 19.09.2021.
//
#include <cmath>

#include "Helper.h"

namespace hillClimb {
    double Helper::DistanceTo(hillClimb::Point pointA, hillClimb::Point pointB) {
        return sqrt(pow(pointB.X() - pointA.X(), 2) + pow(pointB.Y() - pointA.Y(), 2));
    }

    double Helper::Evaluate(hillClimb::Location basePoint, std::vector<hillClimb::Location> locations) {
        double result = 0.0;

        if (!locations.empty()) {
            result += Helper::DistanceTo(basePoint.Position(), locations[0].Position()) + Helper::DistanceTo(locations.back().Position(), basePoint.Position());

            for (int i = 0; i < locations.size() - 1; i++) {
                result += Helper::DistanceTo(locations[i].Position(), locations[i + 1].Position());
            }
        }

        return result;

    }

    vector<hillClimb::Location> Helper::Exchange(vector<hillClimb::Location> locations, int index1, int index2) {

        hillClimb::Location tmp = locations[index1];
        locations[index1] = locations[index2];
        locations[index2] = tmp;

        return locations;
    }
}
