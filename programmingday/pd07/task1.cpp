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
    for(int row=1;row>=rowsize;row++)
    { 
    for (int col=1;col>=row;col++)
    {
   cout<<"*";
    }
   cout<<endl;



   
}
   
   


}