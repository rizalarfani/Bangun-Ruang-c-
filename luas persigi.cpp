#include <iostream>
#include <conio.h>
using namespace std;

int LuasPersegi (int p, int i) {
	int luas;
	luas = p*i;
	return luas;
}

int main(int argc, char const *argv[])
{
	int a, b;

	std::cout << "Masukan Panjang : "; std::cin >> a;
	std::cout << "Masukan lebar : "; std::cin >> b;

	std::cout << "Luas Persegi : " << LuasPersegi(a,b);
	
	std::cin.get();
	getch();
	return 0;
}