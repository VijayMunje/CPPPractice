/* bydefault value of int,float, pointer*/

#include<iostream>
using namespace std;
class Point {
public:
    Point() { cout << "Constructor called"; }
};
 
int main()
{
   Point t1, *t2;
   int a;
   cout<<a;
   return 0;
}
