#include<iostream>
using namespace std;
class Test{
	private:
	static int i;
	public:
	  
	
   void call(){
			i++;
			cout<<"call numero"<<i<<endl;
		 }

};
int Test::i = 0;

int main() {
	Test test;
	
    test.call();
	test.call();
    test.call();
    
    return 0;
}
