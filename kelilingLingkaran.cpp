#include <iostream>
#include <conio.h>

using namespace std;

int main () {

	int jari_jari;
	float phi,keliling,hasil;
	char satuan;

	phi = 3.14;

	cout << "Masukan Nilai dari jari_jari : "; cin >> jari_jari;
	cout << "\n";
	cout << "Masukan Satuan nilai nya : "; cin >> satuan;
	cout << "\n";
	cout << "Anda masukan jari-jari nya : " << jari_jari << " " << satuan << endl;

	if (satuan == 'C') {
		cout << "Diketahui " << endl;
		cout << "Jari-jari : " << jari_jari << endl;
		keliling = 2 * phi * jari_jari;
		cout << "Hasil nya : " << keliling << endl;
	} else if (satuan == 'M') {
		hasil = jari_jari * 100;
		cout << "Diketahui " << endl;
		cout << "Jari-jari : " << hasil << endl;
		keliling = 2 * phi * hasil;
		cout << "Hasil nya : " << keliling << endl;  
	}



	cin.get();
	getch();
	return 0;
}
