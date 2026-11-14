
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle {
private:
    // Sommets du triangle.
    Point A;
    Point B;
    Point C;

public:
    // Constructeur par defaut.
    Triangle();

    // Constructeur avec trois sommets.
    Triangle(const Point& p1, const Point& p2, const Point& p3);

    // Calcule le perimetre du triangle.
    double perimetre() const;
};

#endif
