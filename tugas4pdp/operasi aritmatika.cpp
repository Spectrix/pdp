#include <iostream>
#include <string>
using namespace std;

int main() {
	int bil1 = 70;
	int bil2 = 49;

	string operasi;

	operasi = "Penjumlahan";
	cout << operasi << ": " << (bil1 + bil2) << endl;

	operasi = "Pengurangan";
	cout << operasi << ": " << (bil1 - bil2) << endl;

	operasi = "Perkalian";
	cout << operasi << ": " << (bil1 * bil2) << endl;

	operasi = "Pembagian";
	cout << operasi << ": " << (bil1 / bil2) << endl;

	operasi = "Modulus";
	cout << operasi << ": " << (bil1 % bil2) << endl;

	return 0;
}
