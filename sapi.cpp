#include<iostream>
using namespace std;

int main(){
	float pt;
	float lt;
	float pk;
	float lk;
	float luas_t;
	float luas_k;
	
	cout<<"Panjang tanah : ";cin>>pt;
	cout<<"Lebar tanah : ";cin>>lt;
	luas_t = pt*lt;
	cout<<"Luas tanah : "<<luas_t;
	cout<<"Panjang kandang : ";cin>>pk;
	cout<<"Lebar kandang : ";cin>>lk;
	luas_k = pk*lk;
	cout<<"Luas kandang : "<<luas_k;
	
	return 0;

	
}
