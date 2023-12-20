#include <iostream>
#include<fstream>

using namespace std;
void number();
void decimal();
void character();
main()

{
   number();
   decimal();
   character();

}

void number()
{
int number;
    cout<<"Enter number: ";
    cin>>number;
    fstream numberfile;
    numberfile.open("number.txt",ios::out);
     numberfile<<number;
     numberfile.close();
}
void decimal()
{
    float decimalnumber;
    cout<<"Enter decimal number: ";
     cin>>decimalnumber;
    fstream decimalfile;
    decimalfile.open("decimal.txt",ios::out);
     decimalfile<<decimalnumber;
     decimalfile.close();


}

void character()
{
    char character;
    cout<<"Enter character: ";
     cin>>character;
    fstream characterfile;
    characterfile.open("character.txt",ios::out);
     characterfile<<character;
     characterfile.close();


}
