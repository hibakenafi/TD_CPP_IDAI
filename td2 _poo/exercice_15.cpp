#include <iostream>
#include <cstring>
using namespace std;

class Fichier {
private:
    char* Ptr; 
    size_t longueur;  // Longueur en nombre d'octets

public:
    Fichier(size_t taille) ;
    void Creation(size_t taille);
    void Remplit();
    void Affiche() ;
    // Destructeur
    ~Fichier() {
        delete[] Ptr;
    }
};
// Constructeur
 Fichier::Fichier(size_t taille){
   Ptr = new char[taille];
        longueur = taille;
    }
// Methode pour allouer un espace a  partir du pointeur P
 void Fichier::Creation(size_t taille) {
        Ptr = new char[taille];
        longueur = taille;
    }
// Methode pour remplir arbitrairement l'espace memoire
    void Fichier:: Remplit() {
        if (Ptr != NULL) {
            for (size_t i = 0; i < longueur; i++) {
                Ptr[i] = 'A' + (i % 26);  
            }
        }
    }
// Methode pour afficher la zone memoire pointeur par P
    void Fichier::Affiche() {
        if (Ptr != NULL) {
            for (size_t i = 0; i < longueur; i++) {
                cout << Ptr[i];
            }
            cout << endl;
        }
    }


int main() {
    size_t taille = 10;  // Taille du fichier (en octets)

    Fichier* fichier = new Fichier(taille);

    // Appel des methodes
    fichier->Remplit();
    fichier->Affiche();

    // Suppression de l'objet par 'delete'
    delete fichier;

    return 0;
}
