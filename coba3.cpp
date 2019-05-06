#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>

using namespace std;

int wiu,x,y;
char kata[10], temp[10];

struct Pasien
{
    double nomor;
    string nama;
    string jk;
};

Pasien psn[999];

void isi_data()
{
    cout<<"Banyak data pasien yang ingin diisi : ";
    cin>>wiu;
    for (x=0;x<wiu;x++)
    {
        cout<<"Nomor Pasien : ";
        cin>>psn[x].nomor;
        cout<<"Nama    : ";
        cin>>psn[x].nama;
        cout<<"Jenis Kelamin(L/P)  : ";
        cin>>psn[x].jk;
        cout<<"======================"<<endl;
    }
}

void tampil_data()
{
    system("cls");
    for (x=0;x<wiu;x++)
    {
        for (y=x+1;y<wiu;y++)
        {
            if (psn[x].nomor<psn[y].nomor)
            {
                Pasien temp;
                temp=psn[x];
                psn[x]=psn[y];
                psn[y]=temp;
            }
        }
    }
    system("cls");
    cout<<"============================"<<endl;
    cout<<"NOMOR      NAMA    JENIS    "<<endl;
    cout<<"                   KELAMIN  "<<endl;
    cout<<"============================"<<endl;
    for (x=0;x<wiu;x++)
    {
        cout<<psn[x].nomor<<"      "<<psn[x].nama<<"     "<<psn[x].jk<<endl;
    }
    cout<<"============================"<<endl;
}

void hapus_data()
{
    system("cls");
    cout<<"Belum hehe"<<endl;
    getch();
}

int main()
{
    menu:
    int pilih;
    cout<<"1. Input Data Pasien"<<endl;
    cout<<"2. Tampilkan Data Pasien"<<endl;
    cout<<"3. Hapus Data Pasien"<<endl;
    cout<<"0. Keluar"<<endl;
    cout<<"Pilih    : ";
    cin>>pilih;
    system("cls");
    switch(pilih)
    {
        case 1:isi_data();getch();system("cls");goto menu;break;
        case 2:tampil_data();getch();system("cls");goto menu;break;
        case 3:hapus_data();getch();system("cls");goto menu;break;
        case 0:break;
    }
}
