
# Compilateur utilise pour le projet.
CXX = g++

# Options de compilation.
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17 -Iinclude

# Fichiers objets necessaires a la construction.
OBJ = Point.o Segment.o Triangle.o main.o

# Cible principale.
all: demo

# Edition de liens pour creer le programme.
demo: $(OBJ)
	$(CXX) $^ -o demo

# Compilation des fichiers sources de la bibliotheque.
%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compilation du programme principal.
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Supprime les fichiers generes par la compilation.
clean:
	rm -f *.o demo demo.exe

.PHONY: all clean
