#include <iostream> 
using namespace std; 
 
 template <class X> X function(X a, X b){
 	if(a>b){
 		return a;
	 }
	 else
	 	return b;
 }
 
 int main(){
 	
 	int i=function(5,10);
 	cout<<i<<" is greater"<<endl;// paasing integer type values 
 	
 	float f=function(5.6,3.1);
 	cout<<f<<" is greater"<<endl;//paasing float type values 
 	
 	return 0;
 }
