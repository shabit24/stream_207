#include <iostream>
using namespace std;

int main() {

	try {
		cout << "Selamat Belajer di Prodi TI UMY" << endl;
		throw 0.5;
		cout << "Pernyataan tida akan dieksekusi" << endl;
	}
	catch (int a) {
		cout << "Pengecualian akan dieksekusi" << endl;

	}
	catch (...) {
		cout << "default pengecualian dieksekusi" << endl;
	}
	return 0;
}
