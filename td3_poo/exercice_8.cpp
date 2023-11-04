#include<iostream>
using namespace std;
template <typename T>
T fct_carre( T x ){
    return x*x;
}
int main (){
    int b;
    cout<<"entrer un nombre"<<endl;
    cin>>b;
   cout<< "le carre du nombre "<<b <<"est  : "<< fct_carre(b);
}