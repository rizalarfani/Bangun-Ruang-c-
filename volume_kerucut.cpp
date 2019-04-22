#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;


int main () {

	// Deklarasi variabel
	// S = garis pelukis
	// D diameter
	float volume,jari,tinggi,phi,s;
	int akar,hasil;
	phi = 3.14;

	cout << "================================" <<endl;
	cout << "= Selmat Datang Di progam kami = " <<endl;
	cout << "=  Menghitung Volume Kerucut   =" <<endl;
	cout << "=       By : Rijal arfani      =" <<endl;
	cout << "================================" <<endl;
	cout << "\n";

	cout << "Masukan nilai jari-jari nya : ";cin >> jari;
	cout << "Masukan nilai Tinggi nya : ";cin >> tinggi; 

	// Jika jari-jari nya tidak di ketahui dan yang diketahui garis pelukis
	// maka cari jari-jari dengan mengunakan phytagoras
	if (jari == 0) {

		cout << "Masukan Nilai Garis pelukis nya : "; cin >>s;
		// Rumus phytagoras s^2 = t^2 * r^2
		akar = (tinggi * tinggi) - (s * s);
		// sqrt fungsi akar
		hasil = sqrt(akar);
		// Rumus Volume Kerucut
		volume = (phi * (hasil * hasil) * tinggi)/3;
		cout << "\n"; 
		cout << "Diketahui " <<endl;
		cout << "jari-jari : " << hasil << " cm" <<endl;
		cout << "Tinggi : " << tinggi << " cm" <<endl;

	 } else {
		// Rumus Volume Kerucut
		volume = (phi * (jari * jari) * tinggi )/3;
		cout << "Diketahui " <<endl;
		cout << "\n"; 
		cout << "jari-jari : " << jari << " cm" <<endl;
		cout << "Tinggi : " << tinggi << " cm" <<endl;
		
	}

	cout << "\n"; 
	
	cout << "Volume nya adalah : "<< volume << " cm3";	
	cout << "\n";

	cout << "================================" <<endl;
	cout << "=        Terimah Kasih         = " <<endl;
	cout << "================================" <<endl;

	cin.get();
	getch();
	return 0;
}