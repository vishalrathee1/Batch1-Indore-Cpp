#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N; //Read N
	int rn = 1; //tells us which row are we printing
	while(rn<=N){
		//task
		int star = 1;
		while(star<=rn){
			cout<<'*';
			star = star+1;
			//star++;
		}
		cout<<endl;
		//updation
		rn = rn+1;
	}
	return 0;
}
