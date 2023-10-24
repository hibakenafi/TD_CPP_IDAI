#include<iostream>
using namespace std;
 class nbr_complexe{
 	private:
 		double Re;
 		double Img;
 	public:
	  nbr_complexe(double Re,double Img);
	  nbr_complexe Addition(const nbr_complexe& autre);
	  nbr_complexe Soustraction(const nbr_complexe& autre);
	  nbr_complexe Multiplication(const nbr_complexe& autre);
	  nbr_complexe Division(const nbr_complexe& autre);
	 	void afficher();
	 nbr_complexe egalite(const nbr_complexe& autre);
	  	 
 };
  nbr_complexe::nbr_complexe(double Re,double Img){
  	this->Re=Re;
  	this->Img=Img;
  }
    
  
      nbr_complexe nbr_complexe::Addition ( const nbr_complexe& autre){
	  	return nbr_complexe(Re+autre.Re, Img+autre.Img);
	}
	 nbr_complexe nbr_complexe::Soustraction ( const nbr_complexe& autre){
	  	return nbr_complexe(Re-autre.Re, Img-autre.Img);
	}
	 nbr_complexe nbr_complexe::Multiplication ( const nbr_complexe& autre){
	  	return nbr_complexe(Re*autre.Re, Img*autre.Img);
	}
	 nbr_complexe nbr_complexe::Division ( const nbr_complexe& autre){
	  	return nbr_complexe(Re/autre.Re, Img/autre.Img);
	}
	 void nbr_complexe::afficher(){
	  
        cout << Re << " + " << Img << "i" << endl;}
    nbr_complexe nbr_complexe::egalite(const nbr_complexe& autre){
    	if (Re ==autre.Re && Img== autre.Img){
    		 cout << "Les nombres complexes sont égaux." << endl;
            } else {
                cout << "Les nombres complexes ne sont pas égaux." << endl;
            }
		}
    	
	
int main(){
	double reelle1, imaginaire1, reelle2, imaginaire2;
    cout << "Entrez la partie réelle du premier nombre complexe : ";
    cin >> reelle1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> imaginaire1;

    cout << "Entrez la partie réelle du deuxième nombre complexe : ";
    cin >> reelle2;
    cout << "Entrez la partie imaginaire du deuxième nombre complexe : ";
    cin >> imaginaire2;
    
	nbr_complexe complexe1(reelle1,imaginaire1);
	nbr_complexe complexe2(reelle2,imaginaire2);
	int choix;

   cout << "1. Égalité\n2. Addition\n3. Soustraction\n4. Multiplication\n5. Division\n";
   cin >> choix;

    switch (choix) {
        case 1:
            complexe1.egalite(complexe2).afficher();
            break;
        case 2:
           	complexe1.Addition(complexe2).afficher();
            break;
        case 3:
           	complexe1.Soustraction(complexe2).afficher();
            break;
        case 4:
		   complexe1.Multiplication(complexe2).afficher();
            break;
        case 5:
           	complexe1.Division(complexe2).afficher();
            break;
        default:
            cout << "Opération non valide." << endl;
            break;
    }

    return 0;
}

