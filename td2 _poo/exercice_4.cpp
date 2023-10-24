#include<iostream>
using namespace std;
 int main(){
 	int taille;
 	cout<<"veuillez entrer la taille "<<endl;
 	cin>>taille;
 	//alllocation dynamique
 	 int *tableau= new int(taille);
 	 int *carre= new int(taille);
 	 //remplissage du tableau 
 	   for(int i=0;i<taille;i++){
 	  	cout<<"l'elemet "<<i+1<<endl;
 	  	cin>>tableau[i];
	   }
	   
 	  for(int i=0;i<taille;i++){
 	  	carre[i]=tableau[i]*tableau[i];
 	  	
	   }
 	 
 	 //delete tableau carre 
 	 delete[]tableau;
 	 //afficher tableau carre
 	 cout<<"les elements du tableau carre sont"<<endl;
 	  for(int i=0;i<taille;i++){
 	  cout<<"carre["<<i+1<<"]="<<carre[i]<<endl;
	   }
 	 
 	 //delete tableau carre 
 	 delete[]carre;
 	 return 0;
 }
