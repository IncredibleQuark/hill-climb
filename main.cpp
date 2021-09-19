#include <iostream>
#include <string>

#include "Location.h"
#include "Algorithm.h"
#include "Helper.h"

extern "C" int main() {

    hillClimb::Location basePoint = hillClimb::Location::WithRandomPosition("Base point");

    std::cout << basePoint.Label() << std::endl;
    vector<hillClimb::Location> initialPath;
    initialPath.reserve(30);

    for (int i = 0; i < 30; i++) {
        initialPath.push_back(hillClimb::Location::WithRandomPosition(std::to_string(i)));
    }

    double initialDistance = hillClimb::Helper::Evaluate(basePoint, initialPath);

    std::cout << "Initial distance: " << initialDistance << endl;

    vector<hillClimb::Location> resultPath = hillClimb::Algorithm::Solve(basePoint, initialPath);

    hillClimb::Helper::Visualize(initialPath);
    hillClimb::Helper::Visualize(resultPath);

    return 0;
}
