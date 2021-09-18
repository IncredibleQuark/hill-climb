//
// Created by lkupi on 18.09.2021.
//

#ifndef HILL_CLIMB_POINT_H
#define HILL_CLIMB_POINT_H

#include <vector>

using namespace std;

namespace hillClimb {
    class Point {

    private:
        int x_;
        int y_;

    public:
        Point(int x, int y);

    public:
        int X() const { return x_; }

        int Y() const { return y_; }

    };
}


#endif //HILL_CLIMB_POINT_H
