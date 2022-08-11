#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
//#include <alloc.h>

using namespace std;
int pil;
int add_pilih_admin1();
int add_baru_admin2();
int add_depan_admin3();
int add_belakang_admin4();
int delete_depan_admin5();
int delete_belakang_admin6();
int add_tampil_admin7();
struct simpul
{
    char admin1[15], admin2 [20];
    int admin3;
    struct simpul *next;
} mhs, *baru, *awal=NULL, *akhir=NULL,*hapus,*bantu;
int clrscr()
{
    system("cls");
}
int main()
{
    do
    {
        clrscr();
        cout<<"MENU SINGLE LINKEDLIST"<<endl;
        cout<<"1. Tambah Depan"<<endl;
        cout<<"2. Tambah Belakang"<<endl;
        cout<<"3. Hapus Depan"<<endl;
        cout<<"4. Hapus Belakang"<<endl;
        cout<<"5. Tampilkan"<<endl;
        cout<<"6. Selesai"<<endl;
        cout<<"Inputkan Pilihan Anda : ";
        cin>>pil;
        add_pilih_admin1();
    } while(pil!=6);
    return 0;
}
int add_pilih_admin1()
{
    if(pil==1)
        add_depan_admin3();
    else if(pil==2)
  add_belakang_admin4();
    else if(pil==3)
        delete_depan_admin5();
     else if(pil==4)
        delete_belakang_admin6();
      else if(pil==5)
        add_tampil_admin7();
    else
        cout<<"Terima kasih";
}
int add_baru_admin2()
{
    baru=(simpul*)malloc(sizeof(struct simpul));
    cout<<"input nim   : ";cin>>baru->admin1;
    cout<<"input nama  : ";cin>>baru->admin2;
    cout<<"input umur  : ";cin>>baru->admin3;
    baru->next=NULL;
}
int add_depan_admin3()
{
    add_baru_admin2();
    if(awal==NULL)
    {
        awal=baru;
        akhir=baru;
        akhir->next=NULL;
    }
    else
    {
        baru->next=awal;
        awal=baru;
    }
    cout<<endl<<endl;
    add_tampil_admin7();
}
int add_belakang_admin4()
{
    add_baru_admin2();
    if(awal==NULL)
    {
        awal=baru;
    }
    else
    {
        akhir->next=baru;
    }
    akhir=baru;
    akhir->next=NULL;
    cout<<endl<<endl;
    add_tampil_admin7();
}

int delete_depan_admin5()
{
    if (awal==NULL)
        cout<<"Kosong";
    else
    {
        hapus=awal;
        awal=awal->next;
        free(hapus);
    }
   cout<<endl<<endl;
    add_tampil_admin7();
}
int delete_belakang_admin6()
{
    if (awal==NULL)
        cout<<"Kosong";
    else if(awal==akhir)
    {
         hapus=awal;
         awal=awal->next;
         free(hapus);
    }
    else
    {
        hapus=awal;
        while(hapus->next!=akhir)
             hapus=hapus->next;
        akhir=hapus;
        hapus=akhir->next;
        akhir->next=NULL;
        free(hapus);
    }
    cout<<endl<<endl;
    add_tampil_admin7();
}
int add_tampil_admin7()
{
     if (awal==NULL)
          cout<<"Kosong";
     else
     {
         bantu=awal;
         while(bantu!=NULL)
         {
            cout<<"  nim  : "<<bantu->admin1;
            cout<<"  nama : "<<bantu->admin2;
            cout<<"  umur : "<<bantu->admin3<<endl;
            bantu=bantu->next;
         }
     }
     getch();
}
