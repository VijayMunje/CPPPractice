
#include <iostream> 
using namespace std; 
  
class Test 
{ 
public: 
      Test() { cout << "Hello from Test() "; } 
} a; 
  
int main() 
{ 
 //   cout << "Main Started "; 
    return 0; 
}
/*(A) Main Started
(B) Main Started Hello from Test()
(C) Hello from Test() Main Started
(D) Compiler Error: Global objects are not allowed

Hello from Test() Main Started
There is a global object ‘a’ which is constructed before the main 
functions starts, so the constructor for a is called first, then main()’
 execution begins.
*/
