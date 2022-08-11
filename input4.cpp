#include<iostream>
using namespace std;

int main(){
	int x;
	int y;
	int z;
	cout<<"input x : ";cin>>x;
	cout<<"input y : ";cin>>y;
	z = x*y;
	cout<<z<<"\t";
	
	if(z>10){
		cout<<"Lebih dari 10";
	}else{
		cout<<"Kurang dari 10";
	}
	
	return 0;
}

