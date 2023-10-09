#include<iostream>
using namespace std;

int main(){
	//largest of three nums
	int a,b,c;
	//cout<<a;
	//cout<<endl;
	cin>>a>>b>>c;

	//cout<<a<<endl<<b<<endl<<c<<endl;

	// condition check if
	// syntax
	// if(condition){
	//	code
	// }
	//
	// if(condition){
	//	code1
	// }
	// else{
	//	code2
	// }
	//
	// if(condition1){
	//	task1 // code1
	// }
	// else if(condition2){
	//	task2// code 2
	// }
	// else if(condition3){
	//	sometask	
	// }
	//	else if(condition4){
	//		some other task
	//	}
	// else{
	//	task 3
	// }
	

	//kya a b se bada hai aur uske saath saath c se bhi bada hai
	// a--> 10, b-->12, c-->15
	if(a>b && a>c){
		cout<<a<<endl;
	}
	else if(b>a and b>c){
		cout<<b<<endl;
	}
	else{
		cout<<c<<endl;
	}

	int x = 10;

	if(x>0 || x==0){
		cout<<"Number is non-negative"<<endl;
	}
	else{
		cout<<"Number is negative"<<endl;
	}

	return 0;
}
