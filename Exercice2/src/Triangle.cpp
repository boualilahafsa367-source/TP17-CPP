
#include "Triangle.h"
#include "Segment.h"

// Initialise un triangle avec ses trois sommets a l'origine.
Triangle::Triangle() : A(), B(), C() {
}

// Initialise le triangle avec trois points.
Triangle::Triangle(
    const Point& p1,
    const Point& p2,
    const Point& p3
) : A(p1), B(p2), C(p3) {
}

// Calcule le perimetre en utilisant les longueurs des trois segments.
double Triangle::perimetre() const {
    Segment AB(A, B);
    Segment BC(B, C);
    Segment CA(C, A);

    return AB.longueur() + BC.longueur() + CA.longueur();
}
