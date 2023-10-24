#include<iostream>
#include<string>

using namespace std;

class Personne {
public:
    string nom;
    string prenom;
    string date_naissance;

    Personne(string nom, string prenom, string date_naissance) : nom(nom), prenom(prenom), date_naissance(date_naissance) {}

    void Afficher() {
        cout << "Le nom est " << nom << endl;
        cout << "Le prénom est " << prenom << endl;
        cout << "La date de naissance est " << date_naissance << endl;
    }
};

class Employe : public Personne {
private:
    double salaire;

public:
    Employe(string nom, string prenom, string date_naissance, double salaire)
        : Personne(nom, prenom, date_naissance), salaire(salaire) {}

    void Afficher() {
        Personne::Afficher();
        cout << "Le salaire est : " << salaire << endl;
    }
};

class Chef : public Employe {
private:
    string service;

public:
    Chef(string nom, string prenom, string date_naissance, double salaire, string service)
        : Employe(nom, prenom, date_naissance, salaire), service(service) {}

    void Afficher() {
        Employe::Afficher();
        cout << "Le service est : " << service << endl;
    }
};

class Directeur : public Chef {
private:
    string societe;

public:
    Directeur(string nom, string prenom, string date_naissance, double salaire, string service, string societe)
        : Chef(nom, prenom, date_naissance, salaire, service), societe(societe) {}

    void Afficher() {
        Chef::Afficher();
        cout << "La société est : " << societe << endl;
    }
};

int main() {
    Personne personne("nom1", "prenom1", "01/01/1980");
    Employe employe("nom2", "prenom2", "15/05/1990", 50000.0);
    Chef chef("nom3", "prenom3", "10/03/1985", 75000.0, "Ressources Humaines");
    Directeur directeur("nom4", "prenom4", "05/11/1975", 100000.0, "Direction Générale", "societeA");

    personne.Afficher();
    employe.Afficher();
    chef.Afficher();
    directeur.Afficher();

    return 0;
}
