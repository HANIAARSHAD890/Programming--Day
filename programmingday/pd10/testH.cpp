#include <iostream>
using namespace std;


int main()
{
    string result1;
    int count=0;
    int storage=0;
    string result = "The sky is blue";
    for(int i=0;result[i]!='\0';i++)
    {
        count++;
    }
for(int j =count-1;j>=-1;j--)
{
    
    result1[storage]=result[j];
    storage++;
  
   if ((result[j]==' ') || (j==-1))
   {

for(int z=storage-1;z>=0;z--)
{
    if ((j==-1) && (z==0))
    {
        cout<<" ";
    }
   cout<< result1[z];
    storage=0;
    
    }
}

}
}



