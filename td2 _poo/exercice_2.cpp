#include<iostream>
using namespace std;
 int fctPair(int n){
 	if (n%2==0){
 		cout<<"il est pair"<<endl;
	 }
 	return 0;
 	
 } 
  
  int fctMultiple3(int n){
  	if(n%3==0){
  		cout<<"il est multiple de 3"<<endl;}
  	 
	  return 0;
	}
	
	  
  
   int main(){
   	int n;
	   cout<<"Donner un entier";
	   cin>>n; 
	   
   	fctPair(n);
   	fctMultiple3(n);
   	if (n%2==0&&n%3==0){
  		cout<<"il est devisible par 6";
	  }
	  return 0;
   }
   
