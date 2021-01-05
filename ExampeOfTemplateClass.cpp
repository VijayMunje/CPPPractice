#include <iostream> 
using namespace std; 
 
template <class X> class Arraylist {
 	private :
 			struct ControlBlock{
 				int capacity;
 				X *p;
			 };
			 
			 ControlBlock *cb;
	public  :
			Arraylist(int capacity){
				cb = new ControlBlock;
				cb->capacity=capacity;
				cb->p= new X[cb->capacity];
			}
			
			void addElement(X e , int index){
				if(index>=0&&index<cb->capacity){
					cb->p[index]=e;
				}
				else{
					cout<<"array index is not valid";
				}
			}
			
			void display(int index){
				cout<<cb->p[index]<<" ";
			}
 };
 
 int main(){
 		
 		//Integer Value
 		Arraylist <int> a(3);
 		a.addElement(10,0);
 		a.addElement(20,1);
 		a.addElement(30,2);
 		for(int i=0;i<3;i++)
 			a.display(i);
 			
 			cout<<endl<<"**********************"<<endl;
 		//Double Values
 		Arraylist <double> a1(3);
 		a1.addElement(10.36,0);
 		a1.addElement(20.25,1);
 		a1.addElement(30.85,2);
 		for(int i=0;i<3;i++)
 			a1.display(i);
 			
 			cout<<endl<<"**********************"<<endl;
 		
 		//Charchter Values
 		Arraylist <char> a2(3);
 		a2.addElement('S',0);
 		a2.addElement('B',1);
 		a2.addElement('C',2);
 		for(int i=0;i<3;i++)
 			a2.display(i);
 		
 	return 0;
 }
