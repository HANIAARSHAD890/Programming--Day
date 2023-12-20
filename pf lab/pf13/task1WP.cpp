#include <iostream>
#include<fstream>

using namespace std;

main()



{

    fstream file;
    file.open("example.txt",ios::out);
    string text ="THIS is sample text";
    file<<text;

    file.close();
}