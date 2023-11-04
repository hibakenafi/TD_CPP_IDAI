#include <iostream>
using namespace std;
class Test{
public:
       static int tableau[] ;
public :
       static int division(int indice, int diviseur){
        if(diviseur==0){
            throw "tentative de diviser par zero";}
        else 
           return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
int x, y;
cout << "Entrez l’indice de l’entier à diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
try
{
    float result=Test::division(x,y);
    cout << "Le résultat de la division est: "<< endl;
     cout << result<< endl;
}
catch(const char *e)
{
    std::cerr << "Erreur"<< e << endl;
    exit(0);
}


return 0; }