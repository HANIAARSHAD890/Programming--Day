#include <iostream>
#include <cmath>
using namespace std;
int findLargestNumber(int arr[], int size);

main()
{
int size;
cout<<"Enter the number of elements: ";

cin>>size;
int arr[size]={0};


cout<<"Enter "<<size<<" numbers, one per line:"<<endl;
for(int i=0;i<size;i++)
{
 cin>>arr[i];
 findLargestNumber( arr, size);

}
}

int findLargestNumber(int arr[], int size)
{

int count=0;
for(int i=0;i<=size-1;i++)
{
while(count<3)
{
count++;


if (arr[count]>arr[i])
{
    cout<<"largest: (cond1)"<<arr[count]<<endl;
}
else
{
    cout<<"largest: (cond2)"<<arr[i]<<endl;
}


}
}
}


    













 












