#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{

	float t,s;
	int hasil,akar;

	cout << "selmat datang" <<endl;
	cout << "\n";

	cout << "Silahkan masukan nilai tinggi : ";cin >> t;
	cout << "Silahkan masukan nilai S : "; cin >> s;
	cout << "\n";

	// Rumus
	hasil = (t * t) + (s * s);

	cout << "Ini hasil nya : " << hasil << " cm" ;
	cout << "\n";
	akar = sqrt(hasil);
	cout << "Ini hasil akar nya : " << akar;


	cin.get();
	getch();
	return 0;
}