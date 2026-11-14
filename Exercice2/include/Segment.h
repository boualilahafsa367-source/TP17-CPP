
#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"

class Segment {
private:
    // Extremites du segment.
    Point debut;
    Point fin;

public:
    // Constructeur par defaut.
    Segment();

    // Constructeur avec deux points.
    Segment(const Point& premier, const Point& second);

    // Calcule la distance entre les deux extremites.
    double longueur() const;
};

#endif
