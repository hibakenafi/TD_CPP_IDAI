#include<iostream>

using namespace std;
int main(){
char c = '\x01' ; 
short int p = 10 ; 
cout << p + 3 <<endl;             /* 1 */ 
cout << c + 1 <<endl;            /* 2 */ 
cout << p + c <<endl ;            /* 3 */ 
cout << 3 * p + 5 * c<<endl;     /* 4 */
return 0;
}


//1. 2 (int)
//2. 11 (int)
//3. 35 (int)
//4. 13 (int)


// explication
// char -> short -> int -> long -> float -> double -> long double

// short <=> short int
// short + int -> int (le plus fort)
// char + int -> int (le plus fort)

// #include <typeinfo>
// cout << typeid(p).name();


