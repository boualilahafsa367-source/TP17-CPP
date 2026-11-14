
#include <iostream>
#include "Matrix.h"

int main() {
    // Création de deux matrices entières de dimensions 2 x 2.
    Matrix<int, 2, 2> matriceA;
    Matrix<int, 2, 2> matriceB;

    // Initialisation de la première matrice.
    matriceA.at(0, 0) = 3;
    matriceA.at(0, 1) = 5;
    matriceA.at(1, 0) = 2;
    matriceA.at(1, 1) = 4;

    // Initialisation de la deuxième matrice.
    matriceB.at(0, 0) = 6;
    matriceB.at(0, 1) = 1;
    matriceB.at(1, 0) = 7;
    matriceB.at(1, 1) = 3;

    // Test de l'addition.
    Matrix<int, 2, 2> somme = matriceA + matriceB;

    std::cout << "Premiere matrice :" << std::endl;
    std::cout << matriceA;

    std::cout << "\nDeuxieme matrice :" << std::endl;
    std::cout << matriceB;

    std::cout << "\nResultat de l'addition :" << std::endl;
    std::cout << somme;

    // Création de deux matrices réelles pour tester la multiplication.
    Matrix<double, 2, 3> matriceC;
    Matrix<double, 3, 2> matriceD;

    // Initialisation de la première matrice.
    matriceC.at(0, 0) = 1.5;
    matriceC.at(0, 1) = 2.0;
    matriceC.at(0, 2) = 1.0;
    matriceC.at(1, 0) = 3.0;
    matriceC.at(1, 1) = 1.0;
    matriceC.at(1, 2) = 2.0;

    // Initialisation de la deuxième matrice.
    matriceD.at(0, 0) = 2.0;
    matriceD.at(0, 1) = 1.0;
    matriceD.at(1, 0) = 1.0;
    matriceD.at(1, 1) = 3.0;
    matriceD.at(2, 0) = 4.0;
    matriceD.at(2, 1) = 2.0;

    // Le résultat possède 2 lignes et 2 colonnes.
    Matrix<double, 2, 2> produit = matriceC * matriceD;

    std::cout << "\nResultat de la multiplication :" << std::endl;
    std::cout << produit;

    // Vérification de la gestion des indices incorrects.
    try {
        matriceA.at(3, 0) = 10;
    }
    catch (const std::out_of_range& erreur) {
        std::cout << "\nErreur detectee : " << erreur.what() << std::endl;
    }

    return 0;
}
