#include<iostream>
using namespace std;

int main(){
	//arithmetic operators
	// +, -, *, /, %
	int a = 15;
	int b = -2;
	int c = a/b;
	cout<<c<<'\n';
	cout<<endl; // endl --> prints newline , not for c 

	//unary operators --> they work on single operands only
	// ++, --
	// rowno <-- rowno + 1 , 1 -->2
	// rowno++; ++rowno; --> increases value by 1
	
	//increment operator ++
	//a++; // increased value of a by 1
	//++a;
	//cout<<a++<<endl; //post increment
	//cout<<a<<endl;
	//pre increment
	//cout<<(++a)<<endl;

	//post decreement 
	//cout<<a--<<endl;
	//cout<<a<<endl;

	//pre decreement
	cout<<--a<<endl;

	// logical operators
	// && , || , (and, or for cpp)
	
	

	//relational operators
	// ==, <, >, <=, >=, !=
	
	return 0;
}
