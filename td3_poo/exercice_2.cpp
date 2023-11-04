#include <iostream>
#include <list>
#include <iterator>
using namespace std;

class Tri{
    private:
        list<int> lst;
        
    public:
        void triABull(){
            list<int>::iterator ptr1 = lst.begin();
            list<int>::iterator ptr2 = ptr1;
            list<int>::iterator end = lst.end();
            for(ptr1;ptr1 !=end; ptr1++){
                for(ptr2++;ptr2 !=end; ptr2++){
                    if(*ptr1<*ptr2){
                       swap(*ptr1,*ptr2);
                    }

                }
            }
        }
        void triSelection(){
            list<int>::iterator ptr1 = lst.begin();
            list<int>::iterator ptr2;
            list<int>::iterator end = lst.end();
            
            for(ptr1;ptr1 !=end; ptr1++){
                list<int>::iterator min= ptr1;
                ptr2=ptr1;
                ptr2++;
                for(ptr2;ptr2 !=end; ptr2++){
                    if(*min>*ptr2){
                        min= ptr2;
                    }

                }
                if (min != ptr1) {
                    swap(*ptr1,*min);
                }
            }
        }

        void triParIns(){
            list<int>::iterator ptr1 = lst.begin();
            list<int>::iterator ptr2;
            list<int>::iterator end = lst.end();
            
            for(ptr1;ptr1 !=end; ptr1++){
                ptr2=ptr1;
                while(ptr2 != lst.begin() && *(prev(ptr2)) > *ptr2){
                    swap(*(prev(ptr2)),*ptr2);
                    ptr2--;
                }
            }
        }


        void add(int nbr){
            lst.push_back(nbr);
        }
        void display(){
            list<int> :: iterator ptr=lst.begin();
            list<int> :: iterator end=lst.end();
            for(ptr;ptr !=end;ptr ++){
                cout<<'\t'<<*ptr;
            }
            cout<<endl;
        }



};

int main(){
    Tri tri;
    int n;
    int nombre;
    cout<<"donner la taille de la liste"<<endl;
    cin>>n;
    cout<<"entrer les nombres"<<endl;
    for(int i=0;i<n;i++){
        cout<< "nombre" <<i+1<<" "<<endl;
        cin>>nombre;
         tri.add(nombre);
    }

    //display du liste ajouter:
    cout<<"la list avant le trie: "<<endl;
    tri.display();
    cout<<endl;
    //display les liste apres tri a  3 different methodes
    tri.triParIns();
     cout<<"la list apres le trie par insertion: "<<endl;
    tri.display();

    //tri par selection:
    
    tri.triSelection();
     cout<<"la list apres le trie par selection: "<<endl;
    tri.display();

    //tri a bull:
    
    tri.triABull();
     cout<<"la list apres le trie a bull: "<<endl;
    tri.display();
    
    
    return 0;
}