#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
private:
    // Constructeur privé pour appliquer le modèle Singleton.
    Logger();

public:
    // Empêche la création de copies du Logger.
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    // Retourne l'unique instance du Logger.
    static Logger& getInstance();

    // Affiche un message avec son niveau.
    void log(const std::string& message);
};

#endif