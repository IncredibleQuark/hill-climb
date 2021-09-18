//
// Created by lkupi on 18.09.2021.
//

#include <string>
#include "Location.h"

using namespace std;

namespace hillClimb {

    int Location::random_ = rand();
    Location::Location(Point position, string label) : position_(position.X(), position.Y()) {
        position_ = position;
        label_ = label;
    }

    Location Location::WithRandomPosition(string label) {
        return hillClimb::Location(hillClimb::Point(Location::Random(), Location::Random()), label);
    };

    int Location::Random() {
        return rand() % 100;
    }
}
