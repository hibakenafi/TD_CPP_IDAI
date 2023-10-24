#ifndef POINT_H
#define POINT_H
class Point {
private :
    double x,y; 
public :
    Point (double x,double y);
    void deplace(double x, double y);
    void affiche();
};
#endif