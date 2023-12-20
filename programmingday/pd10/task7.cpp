#include <iostream>
using namespace std;

int sortedarray(int array[],int arraylength);
bool Isarranged( int array[],int arraylength);
int main()
{
    int arraylength;
    int result = 0;
    int weight[10];
    cout <<"Enter the length of the array: ";
    cin>>arraylength;
    int array[arraylength];
    cout<<"Enter the elements of the array:"<<endl;
    
    for (int i = 0; i < arraylength; i++)
    {
        cin >> array[i];
    }


    cout <<"Can be arranged: ";
    result=Isarranged(  array, arraylength);
    cout<<result;
   
   
}

int sortedarray(int array[],int arraylength)
{

   int j=0;
   int temporary=0;
  while(j!=10)
  {

  
        for (int i = j; i<=arraylength; i++)
     {   
    if(array[j]>array[i])
    {
    
        temporary=array[j];
        array[j]=array[i];
        array[i]=temporary;

    }
    }
j++;

   
}
return array[j];


}
bool Isarranged( int array[],int arraylength)
{
    int sum=0;
sortedarray(array, arraylength);

  bool result=0;
for(int i=0; i<=arraylength-1;i++)
{
    if(array[i+1]-array[i]==1)
    {
        sum++;
    }
    else 
    {
       sum=sum+0;
    }
} 
if (sum==arraylength-1)
{
    return true;
}
else 
{
    return false;
}
}