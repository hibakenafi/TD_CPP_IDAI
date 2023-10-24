#include<iostream>
using namespace std;
class animal{
	protected:
		string nom;
		int age;
	public:
		void set_value(const string& nom, int age) {
       this->nom = nom;
        this->age = age;
    }
};
class zebra :public animal{
	public:
	void Afficher(){
		cout<<"nom du zebra est   "<<nom<<" son age est "<<age<<endl;
	}
};
class dolphine:public animal{
	public:
	void Afficher(){
		cout<<"nom du dolphine est   "<<nom<<" son age est "<<age<<endl;
	}
};
int main(){
	zebra zebra;
	dolphine dolphine;
	zebra.set_value("zebra",5);
	dolphine.set_value("dolphine",5);
	zebra.Afficher();
	dolphine.Afficher();
	
	return 0;
}
