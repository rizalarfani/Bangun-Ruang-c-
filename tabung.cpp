#include <iostream>
#include <conio.h>

int main()
{
	float jari, volume, tinggi;
	

	std::cout << "Masukan Jari 1 : "; std::cin >> jari;
	std::cout << "Masukan tinggi : "; std::cin >> tinggi;

	volume = 2*3.14*jari*tinggi;
	std::cout << "Hasil Nya : ";
	std::cout << volume;

	getch();
	return 0;
}