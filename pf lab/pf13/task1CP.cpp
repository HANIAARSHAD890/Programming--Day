#include <iostream>
#include<fstream>

using namespace std;
int countLines(string filename);
int  displayoutput(int linescount);
main()

{
    string filename;
    int linescount;  // variable taking value of function
linescount=countLines( filename);
displayoutput(linescount);

}

int countLines(string filename)
{
    int count=0;

    fstream  task1file;
    task1file.open("task1.txt",ios::in);
    while(!task1file.eof())
    {
     getline(task1file,filename);
     count++;
    }
    task1file.close();
    return count;
}
int displayoutput(int linescount)
{

    cout<<"Total number of lines: ";
    cout<<linescount;
    return 0;
}