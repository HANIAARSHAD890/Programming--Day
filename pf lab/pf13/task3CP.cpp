#include <iostream>
#include<fstream>

using namespace std;
int calculateFrequency(string fileName,char character,char &character1,char &character2);
void characterconversion(char character,char &character1, char &character2);

main()

{
    char character1=' '; 
    char character2=' ';
    string fileName=" ";
     char character=' ';
    int frequency=0;

 cout<<"Enter the character: ";
 cin>>character;
 cout<<"Total number of characters: ";
 characterconversion(character,character1, character2);
 frequency= calculateFrequency(fileName,character,character1,character2);
 cout<<frequency;
}

 int calculateFrequency(string fileName,char character,char &character1, char &character2)
{
    int linecount=0;
    int totalcount=0;
    int count=0;

    fstream  contentfile;
    contentfile.open("task3.txt",ios::in);
   while(!contentfile.eof())
    {
    count=0;
    getline(contentfile,fileName);


for (int i=0;fileName[i]!='\0';i++)
{

if ((fileName[i]==character1) || (fileName[i]==character2))
{
count++;


}
    
}
 
  
   totalcount=totalcount+count;
    

} 
   contentfile.close();
return totalcount; 

}
void characterconversion(char character, char &character1, char &character2)
{

    int asciicode1;
    int asciicode2;
    asciicode1=character;
    if     ((asciicode1>=65) && (asciicode1<=90))
    {
       asciicode2=asciicode1+32;
    }
    else if((asciicode1>=97) && (asciicode1<=122))
    {
        asciicode2=asciicode1-32; 
    }
   character1=asciicode1;
    character2= asciicode2;
}
