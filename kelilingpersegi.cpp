#include <iostream>
// untuk memangil cin cout
#include <conio.h>
// untuk memanggil getch();

using namespace std;

int main () {

	float kel_persegi,s;
	// saya gunakan float karena hasil nya bisa ada bilangan desimal

	cout << "=================================="  << endl;
	cout << "=  Selamat datang di progam ini  =" << endl;
	cout << "=================================="  << endl;


	cout << "Masukan nilai sisi : "; cin >> s;
	cout <<"\n";

	cout << "Diketahui " << endl;
	cout << "Sisi-sisi " << s << "Cm" << endl;

	kel_persegi = 4*s;
	// rumus kel-persegi

	cout << "Hasil nya : " << kel_persegi << endl;

	
	getch();
	// di gunakan untuk menahan agar tidak keluar 
	return 0;

}
