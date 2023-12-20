#include <iostream>
#include<fstream>

using namespace std;
int charactercount(string line);

main()

{
    string line=" ";
   int countcharacters=0;


 cout<<"Total number of characters: ";
 countcharacters=charactercount(line);
 cout<<countcharacters;

}

  int charactercount(string line)
{
    int linecount=0;
    int totalcount=0;
    int count=0;

    fstream  contentfile;
    contentfile.open("task1.txt",ios::in);
   while(!contentfile.eof())
    {
    count=0;
    getline(contentfile,line);


for (int i=0;line[i]!='\0';i++)
{


count++;

}

      totalcount=totalcount+count;
       }
    contentfile.close();
    return totalcount;
    

}