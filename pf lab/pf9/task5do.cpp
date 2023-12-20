#include <iostream>
using namespace std;
int   printnumber(int elements[],int count);
bool isAlreadyentered()

main()
{

int element;
cout<<"Enter the number of elements: ";
cin>>element;
int elements[element];
cout<<"Enter "<<element<<" numbers, one per line:"<<endl;
  int number;
  int count=0;
for(int i=0;i<element;i++)

{

 count++;
 cin>>elements[i];
number=elements[i];
 for(int k=0;k<=i-1;k++)
      {
        if(number==elements[k])
        {
        cout<<"Already Entered: "<<number<<endl;
        continue;
        }

      }
  


}

cout<<"Unique numbers entered:";
  printnumber(elements,count);










 

}

int   printnumber(int elements[],int count)
{
  for(int j=0;j<count;j++)
{

cout<<elements[j]<<" ";
}




}








