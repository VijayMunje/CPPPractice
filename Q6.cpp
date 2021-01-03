/*
#include<iostream> 
using namespace std; 
  
class X  
{ 
public: 
    int x; 
}; 
  
int main() 
{ 
    X a = {10}; 
    X b = a; 
    cout << a.x << " " << b.x; 
    return 0; 
} 
(A) Compiler Error
(B) 10 followed by Garbage Value
(C) 10 10  ans.
(D) 10 0
*/
#include<iostream> 
using namespace std; 
  
class X  
{ 
public: 
    int x; 
}; 
  
int main() 
{ 
    X a = {10}; 
    X b = a; 
    cout << a.x << " " << b.x; 
    
    return 0; 
} 
