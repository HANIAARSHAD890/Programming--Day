#include <iostream>
#include<fstream>

using namespace std;
void  displayallcontents();
main()

{
  displayallcontents();

}

void  displayallcontents()
{
    string line;
    cout<<"All contents of the file: "<<endl;
    fstream  contentfile;
    contentfile.open("example.txt",ios::in);
    while(!contentfile.eof())
    {
    
     getline(contentfile,line);
     cout<<line<<endl;
    }
    contentfile.close();

}
