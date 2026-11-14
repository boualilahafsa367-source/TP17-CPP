#include "Config.h"
#include <iostream>

// Configuration initiale de l'application.
Config::Config() : nomApplication("GeoManager"), version(1) {}

// Mise à jour des informations.
void Config::definir(const std::string& nom, int numeroVersion) {
    nomApplication = nom;
    version = numeroVersion;
}

// Affichage des paramètres.
void Config::afficher() const {
    std::cout << "Application : " << nomApplication << std::endl;
    std::cout << "Version : " << version << std::endl;
}