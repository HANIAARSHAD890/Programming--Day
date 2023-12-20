#include <iostream>
using namespace std;
bool isLengthEven(string word);

main()
{
int result;
string word;
cout<<"Enter a String: ";
cin>>word;
result=isLengthEven(word);
cout<<result;
}
bool isLengthEven(string word)
{
int result;
int count=0;
while (word[count]!=0)
{

count++;


}
if (count%2==0)

{
  result=true;

}
else 
{
result=false;

}
return result;
}












