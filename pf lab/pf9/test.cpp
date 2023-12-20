#include <iostream>
using namespace std;
void isAlreadyentered(int element,int elements[],int number);

main()
{
int element;
cout<<"Enter the number of elements: ";
cin>>element;
int elements[element];
cout<<"Enter "<<element<<" numbers, one per line:"<<endl;
for(int i=0;i<element;i++)

{

 
 cin>>elements[i];
 int number=elements[i];




 isAlreadyentered(element,elements,number);

}



}
void isAlreadyentered(int element,int elements[],int number)

{
      for(int i=1;i<=1;i++)
      {
        if(number==elements[i])
        {
        cout<<"Already entered";
        }
      }




}







