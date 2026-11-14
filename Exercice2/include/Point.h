
#ifndef POINT_H
#define POINT_H

class Point {
private:
    // Coordonnees du point dans le plan.
    double x;
    double y;

public:
    // Constructeur par defaut.
    Point();

    // Constructeur avec deux coordonnees.
    Point(double coordX, double coordY);

    // Accesseurs des coordonnees.
    double getX() const;
    double getY() const;
};

#endif
