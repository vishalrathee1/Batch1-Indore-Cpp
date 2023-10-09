#include<iostream>
using namespace std;
//question
int main(){
	int a = 1,b=0,c=-1,d=2;
	// true --> all non zero values are true
	// false --> 0
	if(a++ && b++ && c++ && d--){ // if(1 && 0
		cout<<"Hello"<<endl;
	}
	else if(--a && --b && ++c && --d){ //else if(1 && 0
		cout<<"World"<<endl;
	}
	else if( --a || b++ || ++c ){ //if(0 || 0 || 0)
		cout<<"Hii"<<endl;
	}
	else{
		cout<<"Welcome to coding Thinker"<<endl;
	}
	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
	return 0;
}

