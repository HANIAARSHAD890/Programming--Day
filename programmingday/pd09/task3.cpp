#include <iostream>
using namespace std;
bool areAllelementsIdentical(string word[],int size);

main()
{

int size;
int result;
cout<<"Enter the size of Array: ";
cin>>size;
string word[size];
for(int i=1;i<=size;i++)
{
  cout<<"Enter Element "<<i<<": ";
  cin>>word[i-1];

}
result=areAllelementsIdentical( word,size);
cout<<result;

}
bool areAllelementsIdentical(string word[],int size)
{
    bool result=false;
    int sum=0;
for (int i=0;i<size-1;i++)
{

  if (word[i]==word[i+1])
  {
    result=true;
    sum++;

  }
  else 
{
      result=false;

}

}


if (sum==0)
{

return false;

}
else
{
return true;

}


}












