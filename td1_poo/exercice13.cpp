#include <iostream>
#include <cstdlib>//pour pouvoir utiliser rand()
using namespace std;

// Fonction pour simuler un lancer de d�
int throwDice() {
    return rand() % 6 + 1; // G�n�re un nombre al�atoire entre 1 et 6
}

// Fonction pour g�rer le tour d'un  seul joueur
int playerTurn(int joueur) {
    int scoreTour = 0;
    int choix;
    int resultatDes;

    do {
        cout << "Joueur " << joueur << ", voulez-vous lancer 1 ou 2 des ? ";
        cin >> choix;

        if (choix != 1 && choix != 2) {
            cout << "Veuillez choisir 1 ou 2 des." << endl;
        }
    } while (choix != 1 && choix != 2);// s'assurer que le choix soit 1 soit 2

    for (int i = 0; i < choix; i++) {
        resultatDes = throwDice();
        cout << "R�sultat du d� " << i + 1 << " : " << resultatDes << endl;
        scoreTour += resultatDes;
    }

    if (choix == 2 && resultatDes == resultatDes) {
        scoreTour = -scoreTour; // Les deux d�s sont identiques, score n�gatif
    }

    return scoreTour;
}

int main() {
    int score1 = 0;
    int score2 = 0;
    int joueurActuel = 1;

    // jeu
    while (score1 < 30 && score2 < 30) {
        cout << "Score du Joueur 1 : " << score1 << " / Score du Joueur 2 : " << score2 << endl;
        int scoreTour = playerTurn(joueurActuel);

        // Mise � jour du score du joueur actuel
        if (joueurActuel == 1) {
            score1 += scoreTour;
        } else {
            score2 += scoreTour;
        }

        // Passer au joueur 2
        joueurActuel = (joueurActuel == 1) ? 2 : 1;
    }

    // D�termination du gagnant ou d'un match nul(le cas ou les deux ont un score>=30)
    if (score1 >= 30 && score2 >= 30) {
        cout << "Match nul !" << endl;
    } else if (score1 >= 30) {
        cout << "Le Joueur 1 a gagn� !" << endl;
    } else {
        cout << "Le Joueur 2 a gagn� !" << endl;
    }


    return 0;
}






