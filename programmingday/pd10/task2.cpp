#include <iostream>
using namespace std;
int Wordcount(string words[],int wordno,char letter);

main()
{
int wordno;
int sum=0;
 char letter;
cout<<"Enter how many words you want to enter: ";
cin>>wordno;
string words [wordno];
for(int i=0;i<wordno;i++)

{
 cout<<"Enter word "<<i+1<<": "; 
 cin>>words[i];



}
cout<<"Enter the letter you want to count: ";
cin>>letter;
sum=Wordcount(words,wordno,letter);
cout<<letter<<" shows up "<<sum<<" times in the data.";
Wordcount(words,wordno,letter);
}
int Wordcount(string words[],int wordno,char letter)
{
    int sum=0;
    int fake=0;
    for (int i = 0 ; i<wordno ;i++)
    {
    for (int j = 0;words[i][j]!='\0';j++)
    {

if (words[i][j]==letter)
{

sum++;


}
}
}
return sum; 

}








