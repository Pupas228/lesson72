#include "main.h"


int main() {

	///*ofstream fout;

	//fout.open("text.txt");

	//if (fout.is_open()) {

	//	fout << "testing..." << "testing..." << "testing...";
	//	fout.close();
	//}
	ifstream fin;
	fin.open("text.txt");
	if (fin.is_open) {
		string msg;
		fin >> msg;

		cout << "Out from file: " << msg << endl;

		fin.close;
	}
	return 0;
}