#include<iostream>
using namespace std;
template <class T> class point
{ T x, y ; // coordonnees
public :
point (T abs, T ord) { x = abs ; y = ord ; }
void affiche () ;
} ;
template <class T> void point<T>::affiche ()
//static_cast pour les  conversions explicites entre les types de données
{ cout << "Coordonnees : " << static_cast<int> (x) << " " <<  static_cast <int>(y) << "\n" ;
}
int main(){
  point <char> p( 60,65);
    p.affiche();
    return 0;
}
/*
a/ -puisque on a cree une instance de type char
 alors que 60 et 65 sont des entiers
  alors les valeurs vont etres converties en valeurs de char avec le code ASCII
et comme' A '-> 65  ' < '-> 60
L AFFICHAGE VA ETRE 
      Coordonnees : < A
*/
/*
b/ - pour afficher Coordonnees : 60 65 ,il est preferable d utiliser 
'static_cast'  est un operateur pour convertir explicites entre les types de données. 
TypeDestination result = static_cast<TypeDestination>(valeurSource);