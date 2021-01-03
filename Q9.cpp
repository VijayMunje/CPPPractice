/*
NEW								MALLOC
calls constructor			1.doesnot calls constructors
It is an operator			2.It is a function
Returns exact data type		3.Returns void *
on failure, Throws	On 		4.returns NULL
failure, 					
Memory allocated from 		5.Memory allocated from heap
free store					
can be overridden			6.cannot be overridden
size is calculated by 		7.size is calculated manually
compiler					

*/



#include<iostream> 
#include<stdlib.h> 
using namespace std; 
  
class Test 
{ 
public: 
   Test() 
   { cout << "Constructor called"; } 
}; 
  
int main() 
{ 
    Test *t = (Test *) malloc(sizeof(Test)); 
    return 0; 
} 
