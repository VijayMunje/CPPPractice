#include <iostream>

using namespace std;
int main(){
	
	int a=0;
	int b=1;
	
	cout<<a<<" "<<b<<" ";
	
	for(int i=0;i<6;i++){
		
		
		int c=a+b;//1,2,3,5
		cout<<c<<" ";
		a=b;//1	,1,2,3
		b=c;//1,2,3,5
		
	}
	
	//cout<<endl<<c;
	
	return 0;
}

