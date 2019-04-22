#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

int main () {

	float hasil,nilai;
	char satuan;
	
	cout << "Masukan Nilai nya : "; cin >> nilai;
	cout << "Maskan satuan nya : "; cin >> satuan;
	cout <<"\n";

	cout << "Jadi yang anda input : " << nilai << " " << satuan;
	cout <<"\n";

	// if (satuan == 'k') {
	// 	hasil = nilai * 100000;
	// 	cout << "Jadi Hasil nya : " << hasil;
	// 	cout <<"\n";
	// } else if (satuan == 'm') {
	// 	hasil = nilai*1000;
	// 	cout << "Jadi Hasil nya : " << hasil;
	// 	cout <<"\n";
	// }

	switch (satuan) {
		case ('k') :
			hasil = nilai*100000;
			cout << "Jadi Hasil nya : " << hasil;
			cout <<"\n";
		break;
		case ('m' | 'M') :
			hasil = nilai*100;
			cout << "Jadi Hasil nya : " << hasil;
			cout <<"\n";
		break;

		default :
			cout << "Maaf satuan yang anda input tidak ada" << endl;
	}





	cin.get();
	getch();
	return 0;
}
