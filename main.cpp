#include <iostream>
#include <string>

#include "Location.h"
#include "Algorithm.h"

extern "C" int main() {

    hillClimb::Location basePoint = hillClimb::Location::WithRandomPosition("Base point");

    std::cout << basePoint.Label() << std::endl;
    vector<hillClimb::Location> path;
    path.reserve(30);

    for (int i = 0; i < 30; i++) {
        path.push_back(hillClimb::Location::WithRandomPosition(std::to_string(i)));
    }

    vector<hillClimb::Location> result = hillClimb::Algorithm().Solve(basePoint, path);


    for (int x = 0; x < 100; x++) {
        for (int y = 0; y < 100; y++) {
            int value = 0;
            for (int i = 0; i < path.size(); i++) {
                if (path[i].Position().Y() == y && path[i].Position().X() == x) {
                    value = i;
                }
            }
            std::cout << value;
        }
        cout << endl;
    }
    return 0;
}
