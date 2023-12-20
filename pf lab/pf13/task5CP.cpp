#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName1);

void saveToFile(string names[], int adNumbers[], float percentages[], int &count, string fileName2);

main()

{   
    int size=100;
    int count=0;
    string names[size];
      int adNumbers[size];
     float percentages[size];
  
   
    string fileName1="task5.txt";
    string fileName2="topperStudents.txt";
 getStudentDetails(names,adNumbers, percentages,size, count, fileName1);
 saveToFile(names, adNumbers, percentages,  count,  fileName2);


}

void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName1)


{


    fstream  file;
    file.open(fileName1,ios::in);

    while(!file.eof())
    {
     getline(file,fileName1);

    
     file>>names[count];
    
     file>>adNumbers[count];
 
     file>>percentages[count];

    count++;
    }
     file.close();

}

void saveToFile(string names[], int adNumbers[], float percentages[], int &count, string fileName2)
    {
     fstream  file;
    file.open(fileName2,ios::out);

    for(int i=0;i<=count;count++)
    {
     file<<fileName2;
     file<<"Name: ";
     file<<names[i]<<endl;
     file<<"Admission number: ";
     file<<adNumbers[i]<<endl;
     file<<"Percentage: ";
     file<<percentages[i]<<endl;


    }
     file.close();


    }