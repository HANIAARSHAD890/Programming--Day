#include <iostream>
using namespace std;
void printStars(int rowsize);
void printStars1(int rowsize);


main()
{
    int rowsize = 0;
    cout<<"Enter desired number of rows: ";
    cin>>rowsize;
    printStars(rowsize);
    printStars1(rowsize);
  
   
}
    void printStars(int rowsize)
{
    for(int row=rowsize;row>=1;row--)
    { 
    for(int space=row;space>1;space--)
    {
         cout<<" ";
    
    }
    for (int col=rowsize;col>=row;col--)
    {
         cout<<"*";
    }

   cout<<endl;



   
}
}
void printStars1(int rowsize)
{
    for(int row=rowsize;row>=1;row--)
    { 
    for (int space=rowsize;space>row;space--)
    {
         cout<<" ";
    }
    for(int steric=row ;steric>=1;steric--)
    {
         cout<<"*";
    
    }
   cout<<endl;
    }
}






 


