#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float luas_ling,phi,r;

	cout << "======================================" << endl;
	cout << "=  Nama : Diah maharani pratiwi      =" << endl;
	cout << "======================================" << endl;

	cout << "Masukan nilai jari-jari : "; cin >> r;

	// Rumus
	phi = 3.14;
	luas_ling = (phi * (r*r) );

	cout << "Dan hasil nya : " << luas_ling << "Cm2" << endl;

	getch();
	return 0;
}
