#include <iostream>
#include <conio.h>

using namespace std;

int main () {
	float keliling,alas,sisi;
	cout <<"===================================================="<<endl;
	cout<<" =  Menghitung Luas dan Keliling Jajar Genjang"<<endl;
	cout <<"=   Nama        : Balqis Shafa Wardahni"<< endl;
	cout <<"=   Nim         : 18040003"<<endl;
	cout <<"=   2A"<<endl;
	cout<<"======================================================"<<endl;
	cout << "Masukan nilai Alas : "; cin >> alas;
	cout << "Masukan nilai Sisi : "; cin >> sisi;

	keliling = (2 * alas) + (2 * sisi);
	cout << "Hasil nya : " << keliling << endl;

	cout<<"==================================================="<<endl;

	getch();
	return 0;

}
