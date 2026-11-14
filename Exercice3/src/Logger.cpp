#include "Logger.h"
#include <iostream>

// Constructeur privé.
Logger::Logger() {}

// Création et accès à l'unique instance.
Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}

// Affichage d'un message dans la console.
void Logger::log(const std::string& message) {
    std::cout << "[LOG] " << message << std::endl;
}