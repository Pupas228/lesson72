#include "main.h"
	Student{
public:
	string name;
	age;
	mark;
	Student(string name, int age double mark, bool alive) {
		this->name = name;
		this->age = age;
		this->mark = mark;
		this->alive = alive;
	}

};
int main() {
	Student st1("Alex", 15, 9.5, true);
	Student st1("Peter", 14, 4.5, false);
	ofstream fout;

	fout.open("text.txt");

	if (fout.is_open()) {
		fin >> temp[i].name;
		fin >> temp[i].age;
		fin >> temp[i].mark;
		fin >> temp[i].alive;
		cout << "Out from file: " << fin >> temp[i].name << " : " << fin >> temp[i].age << ", ";
		cout << fin >> temp[i].mark << ", " << fin >> temp[i].alive " ." << endl;
		//fout << "testing..." << "testing..." << "testing...";
		//fout.close();
	}
	ifstream fin;

	fin.open("text.txt");

	if (fin.is_open) {

		fin >> temp[0].name;
		cout << "Out from file: " << msg << endl;
		fin.close();
		/*string msg;
		fin >> msg;

		cout << "Out from file: " << msg << endl;

		fin.close;*/
	}
	return 0;
}