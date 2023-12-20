#include <iostream>
using namespace std;
void printStars(int rowsize);
main()
{
    int rowsize = 0;
    cout<<"Enter desired number of rows: ";
    cin>>rowsize;
    printStars(rowsize);
}
    void printStars(int rowsize)
   {
   for (int i=rowsize;i>=0;i--)
    { 
   for(int col=i;col>=0;col--)
    {
   cout<<"*";
    }
    cout<<endl;
    }
   }



