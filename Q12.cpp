#include <iostream> 
using namespace std; 
  
class Complex{
	private :
		double a;
		
	public :
		void setdata(double aa){
			a=aa;
		}
		void display(){
			cout<<a<<endl;
		}
		
		Complex operator ++(){
			Complex c;
			//cout<<"pre";
			c.a=++a;
			return c;
		}
		Complex operator ++(int){
			Complex c;
			c.a=a++;
			return c;
		}
};

int main(){
		double xx=10.10;
		//setdata(xx,yy);
		cout<<"*****************************PRE INCREMENT***************************************"<<endl;
		Complex pre1;
		pre1.setdata(xx);
		pre1.display();
		Complex pre2;
		pre2=++pre1;
		pre2.display();
		pre1.display();
		cout<<"*****************************POST INCREMENT***************************************"<<endl;
		Complex c1;
		c1.setdata(xx);
		c1.display();
		Complex c2;
		c2=c1++;
		c2.display();
		c1.display();
	return 0;
}
