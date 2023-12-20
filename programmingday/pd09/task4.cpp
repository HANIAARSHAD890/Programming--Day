#include <iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n);
main()
{
int n;
int size;
int result;
cout<<"Enter the size of Array: ";
cin>>size;
int arr[size];
for(int i=1;i<=size;i++)
{
  cout<<"Enter Element "<<i<<": ";
  cin>>arr[i-1];

}
cout<<"Enter number of times even-odd transformation need to be done: ";
cin>>n;
evenOddTransform(arr, size, n);

}
void evenOddTransform(int arr[], int size, int n)
{

    int count=0;
   int evenodd;

for (int i=0;i<size;i++)
{ 
    int value=arr[i];
    count=0;
    
    while(count<3)
 {

  if ((arr[i]%2==0))
  {
     
     value=value-2;


 
  }

  else 
{
 value=value+2;


 
}
 
 count++;
 }

 if (i==0)
 {
   cout<<"[";

 }
 if (i<size-1)
   cout<<value<<", ";
else if (i==size-1)
cout<<value;
}
cout<<"]";
}

































