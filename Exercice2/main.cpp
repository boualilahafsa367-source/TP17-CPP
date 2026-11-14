
#include <iostream>
#include <iomanip>

#include "Point.h"
#include "Segment.h"
#include "Triangle.h"

int main() {
    std::cout << "=== TEST DE LA BIBLIOTHEQUE GEO2D ===" << std::endl;

    // Creation des trois sommets du triangle.
    Point A(2.0, 3.0);
    Point B(8.0, 3.0);
    Point C(5.0, 7.0);

    // Creation des trois segments du triangle.
    Segment AB(A, B);
    Segment BC(B, C);
    Segment CA(C, A);

    // Creation du triangle a partir de ses sommets.
    Triangle triangle(A, B, C);

    // Affichage des longueurs avec deux chiffres apres la virgule.
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "\nLongueur AB : " << AB.longueur() << std::endl;
    std::cout << "Longueur BC : " << BC.longueur() << std::endl;
    std::cout << "Longueur CA : " << CA.longueur() << std::endl;

    // Calcul et affichage du perimetre.
    std::cout << "\nPerimetre du triangle : "
              << triangle.perimetre() << std::endl;

    return 0;
}
