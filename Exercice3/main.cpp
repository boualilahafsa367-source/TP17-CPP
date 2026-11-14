#include <iostream>
#include "Logger.h"
#include "Config.h"

int main() {
    // Récupération de l'instance unique du Logger.
    Logger& journal = Logger::getInstance();

    journal.log("Demarrage du programme.");

    // Création et modification de la configuration.
    Config configuration;
    configuration.definir("GeoManager", 3);

    configuration.afficher();

    journal.log("Fin du programme.");

    return 0;
}