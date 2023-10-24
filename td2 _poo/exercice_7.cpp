#include<iostream>
using namespace std;

int main() {
    int tab[10];
    int temp;
    int n;

    // Demander à l'utilisateur de saisir 10 entiers
    for (int i = 0; i < 10; i++) {
        cout << "Entrez un entier : tab["<<i+1<<"] ";
        cin >> tab[i];
    }

    // Tri à bulles
    do{
	     n=0;
        for (int i =0 ; i < 9; i++) {
            if (tab[i] > tab[i + 1]) {
                // Échanger les éléments si ils ne sont pas dans le bon ordre
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
            n++;
            }
        }
 }while(n!=0)  ;

    // Afficher le tableau trié
    cout << "Tableau trie en ordre croissant : ";
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}

