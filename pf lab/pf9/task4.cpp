#include <iostream>
using namespace std;
int reversenumbers(int element,int elements[]);
main()
{
int element;
cout<<"Enter the number of elements: ";
cin>>element;
if (element<=0)
{
cout<<"Invalid input. Number of elements must be greater than 0.";


}
int elements[element];
cout<<"Enter "<<element<<" numbers, one per line:"<<endl;
for(int i=0;i<element;i++)

{
 
 cin>>elements[i];
 

}
cout<<"Numbers in reverse order: ";
reversenumbers(element,elements);

}
int reversenumbers(int element,int elements[])
{
    for(int j=element-1;j>=0;j--)
    {cout<<elements[j];
    cout<<" ";
    }
    


}







