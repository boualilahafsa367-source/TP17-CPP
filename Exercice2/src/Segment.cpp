
#include "Segment.h"
#include <cmath>

// Cree un segment dont les deux extremites sont a l'origine.
Segment::Segment() : debut(), fin() {
}

// Initialise le segment avec deux points.
Segment::Segment(const Point& premier, const Point& second)
    : debut(premier), fin(second) {
}

// Calcule la longueur du segment avec la formule de distance.
double Segment::longueur() const {
    double dx = fin.getX() - debut.getX();
    double dy = fin.getY() - debut.getY();

    return std::sqrt(dx * dx + dy * dy);
}
