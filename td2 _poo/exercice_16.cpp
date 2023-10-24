#include <iostream>

using namespace std;

struct Element {
    int data;
    Element* next;
    Element(int value) : data(value), next(NULL) {}
};

class Liste {
private:
    Element* head;

public:
    Liste() ;
    void AjouterAuDebut(int value);
    void SupprimerAuDebut();
    void AfficherListe();
    ~Liste();
};
Liste::Liste(){
	head=NULL;
}
  // Methode pour ajouter un allouement au debut de la liste
void Liste::AjouterAuDebut(int value) {
        Element* nouvelElement = new Element(value);
        nouvelElement->next = head;
        head = nouvelElement;
    }
 // Methode pour supprimer un allouement au debut de la liste
    void Liste::SupprimerAuDebut() {
        if (head) {
            Element* temp = head;
            head = head->next;
            delete temp;
        }
    }
    // Methode pour afficher la liste en entier
    void Liste::AfficherListe()  {
        Element* current = head;
        while (current!=NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    //destructeur
 Liste::~Liste() {
        while (head) {
            Element* temp = head;
            head = head->next;
            delete temp;
        }
    }

int main() {
    Liste liste1;

    liste1.AjouterAuDebut(3);
    liste1.AjouterAuDebut(2);
    liste1.AjouterAuDebut(1);
    
    cout << "Liste : ";
    liste1.AfficherListe();

    liste1.SupprimerAuDebut();

    cout << "Liste apres suppression : ";
    liste1.AfficherListe();

    return 0;
}
