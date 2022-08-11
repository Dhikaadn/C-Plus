#include <iostream>

using namespace std;

int main()
{
	int uang[] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
	int kembalian, total, qty;

	cout << "Inputkan Jumlah Kembalian: ";
	cin >> kembalian;
	cout << "Maka, Hasil Perhitungan : " << endl;
	for (int i = 0; i < (sizeof(uang) / sizeof(uang[0])); i++)
	{
		if (uang[i] > kembalian) continue;
		total = kembalian / uang[i];
		int rupiah;
		cout << "Sisa Kembalian: " << kembalian << " Maka diberikan, ";
		if (i == 0) {
			cout << "100.000 an : ";
			cout << total << " Lembar";
			qty += total;
		} else if (i == 1) {
			cout << "50.000 an : ";
			cout << total << " Lembar";
			qty += total;
		} else if (i == 2) {
			cout << "20.000 an : ";
			cout << total << " Lembar";
			qty += total;
		} else if (i == 3) {
			cout << "10.000 an : ";
			cout << total << " Lembar";
			qty += total;
		} else if (i == 4) {
			cout << "5000 an : ";
			cout << total << " Lembar";
			qty += total;
		} else if (i == 5) {
			cout << "2000 an : ";
			cout << total << " Lembar";
			qty += total;
		} else if (i == 6) {
			cout << "1000 an : ";
			cout << total << " Lembar";
			qty += total;
		} else if (i == 7) {
			cout << "500 an : ";
			cout << total << " Koin";
			qty += total;
		} else if (i == 8) {
			cout << "200 an : ";
			cout << total << " Koin";
			qty += total;
		} else if (i == 9) {
			cout << "100 an : ";
			cout << total << " Koin";
			qty += total;
		} else if (i == 10) {
			cout << "50 an : ";
			cout << total << " Koin";
			qty += total;
		}
		kembalian = kembalian % uang[i];
		cout << endl;
	}
	cout << "Total Pecahan Uang Kembalian : " << qty << " Buah" << endl;
	return 0;
}
