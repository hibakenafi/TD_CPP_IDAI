#include <iostream>
using namespace std;
class Test{
	public:
	static int i;
	void call(){

    	i++;
    cout<< "call numero "<<i;
}
};

int main() {
	Test test;
    test.call();
    test.call();
    test.call();
    

    return 0;
}