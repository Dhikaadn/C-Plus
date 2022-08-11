#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	string kata;
	char alamat[300];

	
	cout<<" Masukan Nama : ";
	cin.getline(kata);
	cout<<" Masukan alamat : ";
	cin.getline(alamat, 20);
	
	cout<<"\nNama   : "<<kata;
	cout<<"\nAlamat : "<<alamat;

	

	
	return 0;	
}

