#include<iostream>
using namespace std;

int main(){
	float pt;
	float lt;
	float pk;
	float lk;
	float luas_t;
	float luas_k;
	int banyak_k;
	
	cout<<"Panjang tanah : ";cin>>pt;
	cout<<"Lebar tanah : ";cin>>lt;
	luas_t = pt*lt;
	cout<<"Luas tanah : "<<luas_t;
	cout<<"\n\nPanjang kandang : ";cin>>pk;
	cout<<"Lebar kandang : ";cin>>lk;
	luas_k = pk*lk;
	cout<<"Luas 1 kandang sapi : "<<luas_k;
	cout<<"\n\n===========================================================";
	banyak_k = luas_t/luas_k;
	cout<<"\n\nBanyak kandang sapi : "<<banyak_k<<" buah";
	
	
	
	return 0;

	
}
