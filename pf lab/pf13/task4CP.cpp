#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(string names[], string ages[], string matricMarks[], string fscMarks[], string ecatMarks[], int size, int &count);
void saveToFile(string names[], string ages[], string matricMarks[], string fscMarks[], string ecatMarks[], int &count, string fileName);

main()

{
	int size = 100;
	string names[size];
	string ages[size];
	string matricMarks[size];
	string fscMarks[size];
	string ecatMarks[size];

	int count = 0;
	string fileName="student.txt";
	getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, size, count);
	saveToFile(names, ages, matricMarks, fscMarks, ecatMarks, count, fileName);
}

void getStudentDetails(string names[], string ages[], string matricMarks[], string fscMarks[], string ecatMarks[], int size, int &count)
{
	for (int i = 0; i <= count; count++)
	{
		string yesorno;
		cout << "Enter student's name: ";
		cin >> names[i];
		cout << "Enter age of the student: ";
		cin >> ages[i];
		cout << "Enter matricmarks of the student: ";
		cin >> matricMarks[i];
		cout << "Enter the FSC marks of the student: ";
		cin >> fscMarks[i];
		cout << "Enter ecat marks of the student: ";
		cin >> ecatMarks[i];
		cout << "Enter 'no' to stop or 'yes' to continue Enter:";
		cin >> yesorno;
		if (yesorno == "yes")
		{
			count++;
			continue;
		}
		else if (yesorno == "no")
		{
			break;
		}
	}
}

void saveToFile(string names[], string ages[], string matricMarks[], string fscMarks[], string ecatMarks[], int &count, string fileName)
{
	cout << count;
	fstream file;
	file.open(fileName, ios::out);
	for (int i = 0; i <= count; i++)
	{
		file<<"Name: ";
		file << names[i]<<endl;
		file<<"Age: ";
		file << ages[i]<<endl;
		file<<"MatricMarks: ";
		file << matricMarks[i]<<endl;
		file<<"FSCMarks: ";
		file << fscMarks[i]<<endl;
		file<<"ECATMarks: ";
		file << ecatMarks[i]<<endl;
		cout << endl;
	}

	file.close();
}