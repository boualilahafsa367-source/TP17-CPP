
#include "Point.h"

// Initialise le point a l'origine.
Point::Point() : x(0.0), y(0.0) {
}

// Initialise un point avec ses coordonnees.
Point::Point(double coordX, double coordY)
    : x(coordX), y(coordY) {
}

// Retourne la coordonnee X.
double Point::getX() const {
    return x;
}

// Retourne la coordonnee Y.
double Point::getY() const {
    return y;
}
