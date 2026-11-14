
#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
private:
    // Coordonnees privees du point.
    double x;
    double y;
    double z;

public:
    // Constructeur par defaut.
    Point3D();

    // Constructeur parametre.
    Point3D(double coordX, double coordY, double coordZ);

    // Accesseurs permettant de consulter les coordonnees.
    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif
