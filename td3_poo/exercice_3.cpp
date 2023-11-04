#include<iostream>
#include<list>

using namespace std;
class Personne
{
private:
    string nom;
    string prenom;
    int age;
public:
    Personne(string nom, string prenom, int age);
    ~Personne();
    void Affichage();
    //redefinir l operateur < pour utiliser la fct sort()
   bool operator<( Personne& p2){
        if(nom!=p2.nom){
            return nom<p2.prenom;}
        else{
            return prenom< p2.prenom;
        }
        
    }
    
};

Personne::Personne(string nom, string prenom, int age)
{
    this->nom=nom;
    this->prenom=prenom;
    this->age=age;
}
Personne::~Personne(){};
void Personne::Affichage(){
    cout<< "nom : "<<nom<<"prenom : "<<prenom<<"age: "<<age<<endl;
}
int main(){
    list <Personne> mylist;
    string nom;
    string prenom;
    int age;
    int n,i;
    cout<< "entrer le nombres des personne dans cette liste"<<endl;
    cin>>n;
    for (i=0;i<n;i++){
    cout<< "entrer nom prenom age de la personne "<<i<<endl;
    cout<<"  nom :  ";
    cin>>nom;
    cout<<"   prenom :  ";
    cin>>prenom;
    cout<<"  age:  ";
    cin>>age;
   Personne  P(nom,prenom,age);
 mylist.push_back(P);
 mylist.sort();
 for(auto& P : mylist){
    P.Affichage();
 }
}
return 0;
}
