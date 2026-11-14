
#include "Point3D.h"

// Initialise un point a l'origine.
Point3D::Point3D()
    : x(0.0), y(0.0), z(0.0) {
}

// Initialise le point avec trois coordonnees.
Point3D::Point3D(double coordX, double coordY, double coordZ)
    : x(coordX), y(coordY), z(coordZ) {
}

// Retourne la coordonnee X.
double Point3D::getX() const {
    return x;
}

// Retourne la coordonnee Y.
double Point3D::getY() const {
    return y;
}

// Retourne la coordonnee Z.
double Point3D::getZ() const {
    return z;
}
