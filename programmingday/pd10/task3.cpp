#include <iostream>
using namespace std;
bool isRepeatingcycle(int arraylength,int array[],int cyclelength);
main()
{
    int arraylength;
 int cyclelength;
 int result=0;
cout<<"Enter the length of the array: ";
cin>>arraylength;
int array [arraylength];
cout<<"Enter the elements of the array:"<<endl;
for(int i=0;i<arraylength;i++)

{
 
 cin>>array[i];



}
cout<<"Enter the length of the cycle: ";
cin>>cyclelength;

result=isRepeatingcycle(arraylength, array,cyclelength);
cout<<"Output: ";
cout<<result;
}
bool isRepeatingcycle(int arraylength,int array[],int cyclelength)
{
    bool check=false;
    int sum=0;
     int temporary[cyclelength];

    for (int i = 0 ; i<cyclelength ;i++)
    {
        temporary[i]=array[i];
    
    }
  for (  int j = 0; array[j]<arraylength ; j++)
  {

    if (temporary[j]== array[(cyclelength)+j])


    sum++;
    

}
   

  

  if ((sum == cyclelength) || (cyclelength>arraylength))
  {

    check=true;

  }
  return check;
        
}







