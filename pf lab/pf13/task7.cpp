#include <iostream>
#include<fstream>

using namespace std;
void displaywords(string fileName) ;
bool checkcount(string word);
main()
{

string fileName="task7.txt";
displaywords( fileName) ;
}

void displaywords(string fileName)
{

    
    string sentence;
     string word;
     int count=0;
     string line;
    fstream file;
    file.open(fileName,ios::in);
    while (!file.eof())
    {   count=0;

        getline(file,line);
        for (int i=0;line[i]!='\0';i++)
        {
            word=word+line[i];
             count++;
             if(line[i]==' ')
             {
               if (checkcount(word)  == true)
               {
                  cout<<word;
                
               } 
             }
        }
    }

    file.close();
}

bool checkcount(string word)
{

    int count=0;
   for (int i=0;word[i]!='\0';i++)
   {
       count++;
   }
   if (count<=4)
   {
    return true;
   }
   return false; 
}