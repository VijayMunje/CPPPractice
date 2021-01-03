#include <iostream> 
using namespace std; 
  
class Complex{
	private :
		int a;
		int b;
	public :
		Complex(int x,int y){
			a=x;
			b=y;
		}
		void setdata(int aa, int bb){
			a=aa;b=bb;
		}
		void display(){
			cout<<a<<b<<endl;
		}
};

int main(){
		int xx=10;
		int yy=20;
		//setdata(xx,yy);
		Complex c1(xx,yy);
		c1.display();
		Complex c2(c1);
		c2.display();
	return 0;
}
