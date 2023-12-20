#include <iostream>
#include<fstream>

using namespace std;
void readinteger();


main()

{
  readinteger();

}
void readinteger()
{
    int integer=0;
    cout<<"This is an integer: ";
    fstream  numberfile;
    numberfile.open("number.txt",ios::in);
    numberfile>>integer;
    numberfile.close();
    cout<<integer;
}
