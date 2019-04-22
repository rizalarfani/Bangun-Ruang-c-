#include <iostream>
// header untuk panggil fungsi cout,cin dll
#include <conio.h>
// header untuk fungsi getch();
using namespace std;
// untuk menghilangkan std pada cout atau cin

int main()
{

	 char YT;
	 // di gunakan untuk konfirmasi ya atau tidak
	 float p,l,Luas;
	 // saya gunakan float karena terdapat bilangan desimal

	 cout<<"--------------------------------------------------------------------------------"<<endl;
	 cout<<"            Selamat Datang Di Program Penghitung Luas Persegi Panjang"<<endl;
	 cout<<"--------------------------------------------------------------------------------"<<endl;
	 cout<<"Nama        : Dinda Ayu Ningrum"<<endl;
	 cout<<"Nim         : 18040013"<<endl;
	 cout<<"Kelas       : 2A"<<endl;
	 cout<<"--------------------------------------------------------------------------------"<<endl;
	 Pembuka:
	 cout <<"Luas Persegi Panjang"<<endl;
	 
	 cout<<"Masukan panjang = ";
	 cin >> p;
	 
	 cout<<"Masukan lebar = ";
	 cin >> l;

	 Luas =p*l;
	 // rumus luas persegi
	 
	cout<<"Luas Persegi Panjang = "<<Luas<<endl;
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
	cout<<"		          Terima Kasih                                                    "<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	getch();
	// untuk menahan agar tidak close
	return 0;
}
