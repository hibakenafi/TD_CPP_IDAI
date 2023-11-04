#include<iostream>
using namespace std;
class Nbr_complexe{
private:
    int Re;
    int Img;
public:
    Nbr_complexe(int Re,int Img);
    ~Nbr_complexe();
    void operator+(Nbr_complexe);
    void operator-(Nbr_complexe);
    void operator*(Nbr_complexe);
    void operator/(Nbr_complexe);
};
  Nbr_complexe:: Nbr_complexe (int Re,int Img){
        this->Re=Re;
        this->Img=Img;
    }
Nbr_complexe::~Nbr_complexe(){};

 void Nbr_complexe::operator+(Nbr_complexe x){
    int reelle=Re+x.Re;
    int imaginaire=Img+x.Img;
    cout<< reelle<< "+ i"<<imaginaire<<endl;
}
void Nbr_complexe::operator-(Nbr_complexe x){
    int reelle=Re-x.Re;
    int imaginaire=Img-x.Img;
    cout<< reelle<< "+ i"<<imaginaire<<endl;
}
void Nbr_complexe::operator*(Nbr_complexe x){
    int reelle=Re*x.Re-Img*x.Img;
    int imaginaire=Img*x.Re+Re*x.Img;
    cout<< reelle<< "+ i"<<imaginaire<<endl;
}
void Nbr_complexe::operator/(Nbr_complexe x){
    int reelle=(Re*x.Re+Img*x.Img)/(x.Re*x.Re+x.Img*x.Img);
    int imaginaire=(Img*x.Re-Re*x.Img)/(x.Re*x.Re+x.Img*x.Img);
    cout<< reelle<< "+ i"<<imaginaire<<endl;
    }
int main(){
    int choix;
    int reelle1,imaginaire1,reelle2,imaginaire2;
    cout<<"veuillez donner la partie reelle du nombre complexe"<<endl;
    cin>>reelle1;
    cout<<"veuillez donner la partie imaginaire du nombre complexe"<<endl;
    cin>>imaginaire1;
    Nbr_complexe A(reelle1,imaginaire1);
    cout<<"veuillez donner la partie reelle du nombre complexe"<<endl;
    cin>>reelle2;
    cout<<"veuillez donner la partie imaginaire du nombre complexe"<<endl;
    cin>>imaginaire2;
    Nbr_complexe B(reelle2,imaginaire2);
    do{
     cout<<"Menu:"<<endl;
    cout<< "1- somme de deux nombre complexe"<<endl;
    cout<< "2- difraction de deux nombre complexe"<<endl;
    cout<< "3- multiplication de deux nombre complexe"<<endl;
    cout<< "4- division de deux nombre complexe"<<endl;
     cout<< "5- sortir du programme"<<endl;
    cin>>choix;

   
    switch (choix)
    {
    case 1:
        A.operator+(B);
        break;
         case 2:
        A.operator-(B);
        break;
         case 3:
        A.operator*(B);
        break;
         case 4:
        A.operator/(B);
        break;
        case 5:
         cout << "Exiting the program." << std::endl;
        break;
    
    default:
    cout<< "choix invalid! ENTRER UNE VALEUR <5"<<endl;
        break;
    }
}while (choix!=5);


   
    
return 0;
}