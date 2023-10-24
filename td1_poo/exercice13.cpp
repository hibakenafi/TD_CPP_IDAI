#include <iostream>
#include <cstdlib>//pour pouvoir utiliser rand()
using namespace std;

// Fonction pour simuler un lancer de dé
int throwDice() {
    return rand() % 6 + 1; // Génère un nombre aléatoire entre 1 et 6
}

// Fonction pour gérer le tour d'un  seul joueur
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
        cout << "Résultat du dé " << i + 1 << " : " << resultatDes << endl;
        scoreTour += resultatDes;
    }

    if (choix == 2 && resultatDes == resultatDes) {
        scoreTour = -scoreTour; // Les deux dés sont identiques, score négatif
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

        // Mise à jour du score du joueur actuel
        if (joueurActuel == 1) {
            score1 += scoreTour;
        } else {
            score2 += scoreTour;
        }

        // Passer au joueur 2
        joueurActuel = (joueurActuel == 1) ? 2 : 1;
    }

    // Détermination du gagnant ou d'un match nul(le cas ou les deux ont un score>=30)
    if (score1 >= 30 && score2 >= 30) {
        cout << "Match nul !" << endl;
    } else if (score1 >= 30) {
        cout << "Le Joueur 1 a gagné !" << endl;
    } else {
        cout << "Le Joueur 2 a gagné !" << endl;
    }


    return 0;
}






