#include<iostream>
using namespace std;
int main() {
	int x;
	int y;
	
	cout<<"Masukkan x : ";
	cin>>x;
	cout<<"Masukkan y: ";
	cin>>y;
	if (x>y) {
		cout<<"x greater than y";
	}else if(x<y){
		cout<<"x not greater than y";
	}else{
		cout<<"x equal to y";
	}
	
	return 0;
}
