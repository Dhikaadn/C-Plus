#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string alamat;
	int a;
	

	
	cout<<" Masukan alamat : ";
	getline(cin, alamat);
	
	cout<<" Masukan angka : ";
	cin>>a;
	//getline(cin, kata);
	
	//cout<<"\nNama   : "<<kata<<"\n";
	cout<<"Alamat : "<<alamat<<"\n";
	cout<<"angka : "<<a;
	
	return 0;	
}
