#include<iostream>
using namespace std;
class erreur
{ public :
int num ;
} ;
class A
{ public :
A(int n)
{ if (n==1) { erreur er ; er.num = 999 ; throw er ; }
}
} ;
 main()
{ void f() ;
try
{ f() ;
}
catch (erreur er)
{ cout << "dans main : " << er.num << "\n" ;
}
cout << "suite main\n" ;
 }void f(){  try
{ A a(1) ;
}
catch (erreur er)
{ cout << "dans f : " << er.num << "\n" ;
}  
/*
le resultat de ce programme est 
dans f : 999
suite main 
 
 Apres l exception  levee de A -> A(1) le programme cherche catch apropriee 
 puis reprend son execution dans main 
 catch dans la fct main ne sera jamais execute
  puisque il n ya pas pa dxception pour la fct f */

}

