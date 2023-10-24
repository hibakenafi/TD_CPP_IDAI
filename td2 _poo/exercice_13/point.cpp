#include "point.h"
#include<iostream>
using namespace std;
Point::Point (double x,double y){
        this->x=x;
        this->y=y;
    }
    void Point::deplace(double x, double y){
        this->x+=x;
        this->y+=y;
    }
    void Point::affiche(){
        cout<<"les cordonnees du point sont : "<<"("<<x<<","<<y<<")"<<endl;
    }
