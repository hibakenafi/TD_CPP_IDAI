#include "point.h"
#include<iostream>
using namespace std;
int main() {
    double x,y;
    cout<<"Saisir les cordonnes du point : ";
    cin>>x>>y;
    Point monpoint(x,y);
    monpoint.affiche();
    monpoint.deplace(2,2);
    monpoint.affiche();
    return 0;
}