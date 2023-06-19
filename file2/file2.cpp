#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string baris;
	string namaFile;
	ofstream outfile;
	cout << "Masukan Nama file";
	cin >> namaFile;
	outfile.open(namaFile + ".txt", ios::out);
	cout << ">= Menulis file, \'q\' untuk kelur" << endl;

	while (true) {
		cout << "- ";
		getline(cin, baris);

		if (baris == "q") break;
		outfile << baris << endl;


	}
	outfile.close();
	ifstream infile;
	infile.open(namaFile);

	cout << endl << ">= Membuka dan membaca file " << endl;
	if (infile.is_open()) {
		while (getline(infile, baris)) {
			cout << baris << '\n';
		}
		infile.close();
	}
	else cout << "Unable to open file";
	return 0;
}