#include<iostream>
using namespace std;

int main(){
	float nilaiTgs,nilaiUTS,nilaiUAS,nilaiAkhir,nilaiRerata;
	string skor;
	
	cout<<"Program Kalkulasi Nilai Akhir"<<endl;
    cout<<"============================="<<endl;
	cout<<"Masukkan NIlai Tugas    : ";cin>>nilaiTgs;
    cout<<"\nMasukkan NIlai UTS      : ";cin>>nilaiUTS;
    cout<<"\nMasukkan NIlai UAS      : ";cin>>nilaiUAS;
    //cout <<endl;
    
    nilaiRerata=(nilaiTgs+nilaiUTS+nilaiUAS)/3;
    nilaiAkhir=(nilaiTgs*0.5)+(nilaiUTS*0.25)+(nilaiUAS*0.25);
    
    cout<<"============================="<<endl;
    
    printf("Nilai Tugas Anda adalah %.2f\n",nilaiTgs);
    printf("Nilai UTS Anda adalah %.2f\n",nilaiUTS);
    printf("Nilai UAS Anda adalah %.2f\n",nilaiUAS);
    
	cout<<"============================="<<endl;

    printf("Nilai Rata-rata Anda adalah %.2f\n",nilaiRerata);
    printf("Nilai Akhir Anda adalah %.2f\n",nilaiAkhir);
    cout <<endl;
    
    if (nilaiAkhir<50){
    	skor = "E";
	}else if(nilaiAkhir<60){
		skor = "D";
	}else if(nilaiAkhir<65){
		skor = "C";
	}else if(nilaiAkhir<70){
		skor = "BC";
	}else if(nilaiAkhir<80){
		skor = "B";
	}else if(nilaiAkhir<85){
		skor = "AB";
	}else if(nilaiAkhir<=100){
		skor = "A";
	}else{
		skor = "Nilai tidak valid, rentang nilai adalah 0-100";
	}
	
	cout<<"Grade : "<<skor;
	
    
    return 0;   

}
