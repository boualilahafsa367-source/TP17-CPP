
#ifndef MATRIX_H
#define MATRIX_H

#include <array>
#include <cstddef>
#include <stdexcept>
#include <iostream>

template <typename T, std::size_t N, std::size_t M>
class Matrix {
private:
    // Stockage des éléments de la matrice.
    std::array<std::array<T, M>, N> valeurs{};

public:
    // Constructeur par défaut : initialise les éléments à zéro.
    Matrix() = default;

    // Accès à un élément avec vérification des indices.
    T& at(std::size_t ligne, std::size_t colonne) {
        if (ligne >= N || colonne >= M) {
            throw std::out_of_range("Indice de matrice invalide.");
        }

        return valeurs[ligne][colonne];
    }

    // Version constante pour la lecture uniquement.
    const T& at(std::size_t ligne, std::size_t colonne) const {
        if (ligne >= N || colonne >= M) {
            throw std::out_of_range("Indice de matrice invalide.");
        }

        return valeurs[ligne][colonne];
    }

    // Addition de deux matrices de mêmes dimensions.
    Matrix<T, N, M> operator+(const Matrix<T, N, M>& autre) const {
        Matrix<T, N, M> resultat;

        for (std::size_t i = 0; i < N; ++i) {
            for (std::size_t j = 0; j < M; ++j) {
                resultat.valeurs[i][j] = valeurs[i][j] + autre.valeurs[i][j];
            }
        }

        return resultat;
    }

    // Multiplication : une matrice N x M par une matrice M x P.
    template <std::size_t P>
    Matrix<T, N, P> operator*(const Matrix<T, M, P>& autre) const {
        Matrix<T, N, P> resultat;

        for (std::size_t i = 0; i < N; ++i) {
            for (std::size_t j = 0; j < P; ++j) {
                for (std::size_t k = 0; k < M; ++k) {
                    resultat.at(i, j) += valeurs[i][k] * autre.at(k, j);
                }
            }
        }

        return resultat;
    }

    // Affichage de la matrice avec l'opérateur <<.
    friend std::ostream& operator<<(std::ostream& sortie,
                                    const Matrix<T, N, M>& matrice) {
        for (std::size_t i = 0; i < N; ++i) {
            for (std::size_t j = 0; j < M; ++j) {
                sortie << matrice.valeurs[i][j] << " ";
            }

            sortie << '\n';
        }

        return sortie;
    }
};

#endif
