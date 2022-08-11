#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"masukkan a : ";cin>>a;
	cout<<"masukkan b : ";cin>>b;
	
	if(a>b){
		cout<<"a lebih besar dari b";
	}else if(b>a){
		cout<<"b lebih besar dari a";
	}else{
		cout<<"sama besar";
	}
	
	return 0;
}
