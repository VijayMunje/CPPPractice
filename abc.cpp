/*
Which of the followings is/are automatically added to every class, if we do not write our own.
A Copy Constructor
B Assignment Operator
C A constructor without any parameter
D All of the above
ans D.
*/
/*
explaination :
A copy constructor of class T is a non-template constructor whose first parameter is T&?, const T&?, volatile T&?, or const volatile T&?, and either there are no other parameters, or the rest of the parameters all have default values.

Syntax
class_name ( const class_name & )	(1)

*/
#include<iostream> 
using namespace std; 
class A 
{ 
public: 
	A(){ cout <<"1";} 
	A( A &obj){ cout <<"2";} 
}; 

class B: virtual A 
{ 
public: 
	B(){cout <<"3";} 
	B( B & obj){cout<<"4";} 
}; 

class C: virtual A 
{ 
public: 
C(){cout<<"5";} 
C(C & obj){cout <<"6";} 
}; 

class D:private B,private C 
{ 
public: 
	D(){cout<<"7";} 
	D(D & obj){cout <<"8"; } 
}; 

int main() 
{ 
D d1; 
D d(d1); 
}
