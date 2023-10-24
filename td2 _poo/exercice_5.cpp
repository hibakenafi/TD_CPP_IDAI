#include<iostream>
using namespace std;

int main(){
	//declaration entier a 
	int a;
	//declaration referance a
	int ref_a=a;
	//declation pointeur de a
	int *ptr_a=&a;
	 cout<<"entrer a"<<endl;
	 cin>>a;
	
	cout<<"la valeur de a est :"<<a<<endl;
	cout<<"l'adresse de  a est :"<<&a<<endl;		
	cout<<"la valeur de  ref_a est :"<<ref_a<<endl;
	cout<<"l'adresse  de  ref_a est :"<<&ref_a<<endl;
	cout<<"l'adresse de a est :"<<ptr_a<<endl;
	cout<<"la valeur de a est :"<<*ptr_a<<endl;
}
