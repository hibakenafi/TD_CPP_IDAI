#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>// pour le  bon fonctionnement de  find() 
#include<vector>//pour utiliser vector
#include<list>//pour utiliser la liste

using namespace std;
//Q2-une fonction de recherche pour indiquer si une valeur donnée est présente ou non
bool Recherche(set <int>& Myset,int val){
    
    return Myset.find(val)!=Myset.end();
}
// Q3-Modifiez  les parametres de la fonction de recherche  
template <typename InputIterator>
bool Recherche(InputIterator begin, InputIterator end, int  val) {
    return find(begin, end, val) != end;
}
// Q4-Passer la fonction en Template
template <typename InputIterator, typename T>
bool Recherche(InputIterator begin, InputIterator end,   T& val) {
    return find(begin, end, val) != end;
}


int main(){
    
   //declarer le vecteur et list
    vector<int> vec={20,55,14} ;
    list <int> Mylist = {40,55,100,8};
    //Q1-set paramètre pour le type int( 1 a 100)
    set<int> Myset;
   for (int i = 0; i < 100; i++)
    {
        Myset.insert(i+1);
    }
    for(  const int& element: Myset){
        cout<< element<< "  ";
    }
    cout<<endl;
    //valeur recherchee
      int val;
    cout<<"donner la valeur recherchee  ";
    cin>>val;
// utilisation de la fct recherche Q1 
    if(Recherche(Myset, val)){
      cout<<"la valeur recherchee exist dans le set"<<endl; 
    }
    else  {cout<<"la valeur recherchee est introuable dans le set"<<endl;}
 // utilisation de la fonction pour le set
    if(Recherche(Myset.begin(), Myset.end(), val)){
      cout<<"la valeur recherchee exist dans le set"<<endl; 
    }
    else  {cout<<"la valeur recherchee est introuable dans le set"<<endl;}
   
 //utilisation de la fonction  pour la list
   if(Recherche(Mylist.begin(), Mylist.end(), val)){
      cout<<"la valeur recherchee exist dans la list"<<endl; 
    }
    else  {cout<<"la valeur recherchee est introuable la liste"<<endl;}
    
 //utilisation de la fonction pour le vecteur
    if(Recherche(vec.begin(), vec.end(), val)){
      cout<<"la valeur recherchee exist dans le vecteur"<<endl; 
    }
    else  {cout<<"la valeur recherchee est introuable dans le vecteur"<<endl;}
    return 0;
} 
