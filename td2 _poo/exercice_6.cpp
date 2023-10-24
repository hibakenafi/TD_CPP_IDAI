#include<iostream>
using namespace std;
void incrementer(int &a){
	a++;
}
void permuter(int &a,int &b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;	
}
void permuter(int *a,int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int a=5,b=9;
	cout<<"a avant d etre incrementer  "<<a<<endl;
	incrementer(a);
	cout<<" a apres : a= "<<a<<endl;
	cout<<"b avant d etre incrementer  "<<b<<endl;
	incrementer(b);
	cout<<" b apres : b= "<<b<<endl;
	permuter(a,b);
	
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	permuter(&a,&b);
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b;
	
	return 0;
}

