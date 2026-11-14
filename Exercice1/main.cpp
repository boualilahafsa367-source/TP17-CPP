
#include <iostream>
#include "Point3D.h"

int main() {
    std::cout << "=== TEST DE LA CLASSE POINT3D ===" << std::endl;

    // Creation du premier point avec le constructeur par defaut.
    Point3D pointA;

    // Creation du deuxieme point avec des coordonnees personnalisees.
    Point3D pointB(7.25, -3.5, 12.75);

    // Affichage des coordonnees du premier point.
    std::cout << "\nPremier point :" << std::endl;
    std::cout << "X = " << pointA.getX() << std::endl;
    std::cout << "Y = " << pointA.getY() << std::endl;
    std::cout << "Z = " << pointA.getZ() << std::endl;

    // Affichage des coordonnees du deuxieme point.
    std::cout << "\nDeuxieme point :" << std::endl;
    std::cout << "X = " << pointB.getX() << std::endl;
    std::cout << "Y = " << pointB.getY() << std::endl;
    std::cout << "Z = " << pointB.getZ() << std::endl;

    return 0;
}
