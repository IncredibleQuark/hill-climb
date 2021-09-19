//
// Created by lkupi on 18.09.2021.
//

#include "Algorithm.h"
#include "Helper.h"

namespace hillClimb {
    vector<Location> Algorithm::Solve(hillClimb::Location basePoint, vector<hillClimb::Location> locations) {

        double bestLength = Helper::Evaluate(basePoint, locations);
        vector<hillClimb::Location> bestPath = locations;

        int iteration = 0;
        int iterationsWithoutProgress = 0;

        for (int i = 0; i < 100000 && iterationsWithoutProgress < 1000; i++) {
            vector<hillClimb::Location> testedPath = Algorithm::Shuffle(locations);

            double localBestLength = Helper::Evaluate(basePoint, testedPath);

            int index1 = 0;
            int index2 = 1;

            while (index1 < testedPath.size() - 1) {
                testedPath = Helper::Exchange(testedPath, index1, index2);

                iteration++;
                double length = Helper::Evaluate(basePoint, testedPath);

                if (length < localBestLength) {
                    localBestLength = length;
                    index1 = 0;
                    index2 = 1;
                } else {
                    testedPath = Helper::Exchange(testedPath, index1, index2);

                    index2++;
                    if (index2 >= testedPath.size()) {
                        index1++;
                        index2 = index1 + 1;
                    }
                }

            }

            if (localBestLength < bestLength) {
                std::cout << "Better path found with length: " << localBestLength << " (iteration: " << iteration << ")" << std::endl;
                iterationsWithoutProgress = 0;
                bestLength = localBestLength;
                bestPath = testedPath;
            } else {
                iterationsWithoutProgress++;
            }
        }

        std::cout << "Finished after " << iteration << " iterations" << std::endl;
        std::cout << "Iterations without progress " << iterationsWithoutProgress << std::endl;

        return locations;
    }

    vector<Location> Algorithm::Shuffle(vector<hillClimb::Location> locations) {

        for (int i = locations.size() - 1; i > 1; i--) {
            int j = rand() % i + 1;

            if ( i != j) {
                locations = Helper::Exchange(locations, i, j);
            }
        }
        return locations;
    }
}