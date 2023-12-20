#include <iostream>
using namespace std;
string Nextletter(string word);
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

 string result;
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

 
  int asciiCode = word[idx];
asciiCode++;
char character=asciiCode;
word[idx]=character;

  }
  return word;

}

