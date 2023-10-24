#include<iostream>
#include<vector>
using namespace std;

class Pile{
private :
    vector<int> elements;
public :
   //Constructeur pour inistialiser la pile
    Pile(){}
   //Methode pour empiler la pile
   void push(int value){
    elements.push_back(value);
   } 
   //Methode pour depiler la pile
   void pop(){
    if(!isEmpty()){
    elements.pop_back();
    }
    else{
        cout<<"la pile est vide";
    }
   }  
     //verifivation si la pile est vide
   bool isEmpty(){
    return elements.empty();
   }
   int top(){
    if(!isEmpty()){
        return elements.back();
    }
    else{
        cout<<"la pile est vide";
        return -1;
    }
   }
};
int main(){
    Pile p1;
    Pile p2;
    
     //empiler p1
     p1.push(1);
     p1.push(2);
     p1.push(3);
     p1.push(4);
     //empiler p2
     p2.push(5);
     p2.push(6);
     //depiler p1
     while (!p1.isEmpty())
     {
      cout<<"Element depile de P1 : "<<p1.top()<<endl;
      p1.pop(); 
     }
     //depiler p2
     while (!p2.isEmpty())
     {
      cout<<"Element depile de P2 : "<<p2.top()<<endl;
      p2.pop(); 
     }
     return 0;
}
