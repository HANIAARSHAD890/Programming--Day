#include <iostream>
#include<fstream>

using namespace std;
void readname();
main()

{
  readname();

}

void readname()
{
    string name;
    cout<<"This is the name : ";
    fstream  namefile;
    namefile.open("name.txt",ios::in);
     getline(namefile,name);
    namefile.close();
    cout<<name;
}
