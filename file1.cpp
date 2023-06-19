#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string baris;
	ofstream outfile;
	outfile.open("namafile.txt");
	cout << ">= Menulis file, \'q\' untuk kelur" << endl;


	while (true) {
		cout << "- ";
		getline(cin, baris);

		if (baris == "q") break;
		outfile << baris << endl;


	}
	outfile.close();
	ifstream infile;
	infile.open("namafile.txt");

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