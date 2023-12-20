#include <iostream>
using namespace std;
string reverseWords( string given);

int main()
{

    int count=0;
    int storage=0;
    string given;
    cout<<"Enter a string: "; 
    getline(cin,given);
    cout<<"Reversed string: ";
    cout<<reverseWords(given);
}
  string reverseWords( string given)
{
     string result1;
    int count=0;
    int storage=0;
    for(int i=0;given[i]!='\0';i++)
    {
        count++;
    }
    for(int j =count-1;j>=-1;j--)
{
  
   if ((given[j]==' ') || (j==-1))
   {

for(int z=storage-1;z>=0;z--)
{
   cout<< result1[z];
   if((z==0))
   {
    cout<<" ";
    storage=0;
    }
}

}
else 
{
    result1[storage]=given[j];
    storage++;
}
}
}


