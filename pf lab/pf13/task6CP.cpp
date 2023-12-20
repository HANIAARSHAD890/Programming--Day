#include <iostream>
#include<fstream>

using namespace std;
int countLines(string fileName);
int  displayoutput(int linescount);
main()

{
    string fileName="task7.txt";
    int linescount;  // variable taking value of function
linescount=countLines( fileName);
cout<<linescount;

}

int countLines(string fileName)
{
    

    int count=0;
    string character;
     string line;
    fstream file;
    file.open(fileName,ios::in);
     getline(file,line);
     character=line[0];

    while(!file.eof())
    {
        

     getline(file,line);
      if (line[0]==character[0])
      {
          continue;
      }
      else {
    count++;
      }
  
     }

   
    file.close();
    return count;
}
