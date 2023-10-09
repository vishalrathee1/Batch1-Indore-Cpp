#include<iostream>
using namespace std;

int main(){
	int principal;
	int rate;
	int time;

	//computer se input
	// cin --> console input
	//cin>>principal;
	//cin>>rate;
	//cin>>time;
	
	cin >>principal>>   rate >>  time;

	int si = principal*rate*time/100;
	cout<<si<<'\n';
	return 0;

}
