#ifndef CONFIG_H
#define CONFIG_H

#include <string>

class Config {
private:
    std::string nomApplication;
    int version;

public:
    // Constructeur avec des valeurs par défaut.
    Config();

    // Modifie les paramètres de configuration.
    void definir(const std::string& nom, int numeroVersion);

    // Affiche la configuration actuelle.
    void afficher() const;
};

#endif