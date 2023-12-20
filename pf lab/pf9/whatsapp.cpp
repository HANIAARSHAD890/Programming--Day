#include <iostream>
using namespace std;
string Nextletter(string word);
string finalresult(string result[],int idx);
main()
{

int asciicode;
char character;
string word;
string result;

cout<<"Enter a String: ";
getline(cin,word);
cout<<"Shifted String: ";




result=Nextletter(word);
cout<<result;











}
string Nextletter(string word)
{

   for(int idx=0;word[idx]!='\0';idx++)
  {

    
  if (word[idx]=='Z')
  {

    word[idx]='@';

  }
 else if(word[idx]=='z')
  {
    word[idx]='`';

  }
 else  if (word[idx]==' ')
  {

    cout<<" ";
    continue;
  }

 string result;
  int asciiCode = word[idx];
asciiCode++;
char character=asciiCode;

result[idx]=character;
return result;
finalresult(result,idx);


}


  }
string finalresult(string result[],int idx)
{

cout<<result;






}

