#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

#include "Location.h"


extern "C" int main() {

    std::srand((unsigned int) std::time(nullptr));
    int random = rand();

    hillClimb::Location basePoint = hillClimb::Location::WithRandomPosition("Base point");

    std::cout << basePoint.Label() << std::endl;
    vector<hillClimb::Location> path;
    path.reserve(30);

    for (int i = 0; i < 30; i++) {
        path.push_back(hillClimb::Location::WithRandomPosition(std::to_string(i)));
    }

    return 0;
}
