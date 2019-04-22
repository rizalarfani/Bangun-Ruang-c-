#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
 char YT;
 float p,l,keliling;
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"            Selamat Datang Di Program Penghitung Keliling Persegi Panjang"<<endl;
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"Nama        : Annisa Ika Wardani"<<endl;
 cout<<"Nim         : 18040053"<<endl;
 cout<<"Kelas       : 2A"<<endl;
 cout<<"--------------------------------------------------------------------------------"<<endl;
 Pembuka:
 cout <<"Keliling Persegi Panjang"<<endl;
 
 cout<<"Masukan panjang = ";
 cin >> p;
 
 cout<<"Masukan lebar = ";
 cin >> l;
 keliling=p+l+p+l;
 
cout<<"Keliling Persegi Panjang = "<<keliling<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"		          Terima Kasih                                                    "<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"Apakah anda ingin menghitung Luas Persegi Panjang lagi? [Y/T]";
cin>>YT;
if(YT=='Y'||YT=='y')
{
	goto Pembuka;
}
if(YT=='T'||YT=='t')
{
	goto Penutup;
}
Penutup:
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"		     Terima Kasih Telah Menggunakan Program Ini                           "<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;

	getch();
	return 0;
}