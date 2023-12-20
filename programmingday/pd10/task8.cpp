#include <iostream>
using namespace std;
int number(string array[],int arraylength);

main()
{
int arraylength;
 int result=0;
cout<<"Enter the length of the array: ";
cin>>arraylength;
string array[arraylength];
for(int i=0;i<arraylength;i++)
cout<<"Enter the elements of the array (\"left\" or \"right\"): "<<endl;

{
 
 cin>>array[i];



}
cout<<"Number of full rotations: ";
 cout<<number( array,arraylength);
}
int number( string array[],int arraylength)
{
     
    int sum=0;
    int rotation=0;
    int answer=0;


    for (int i = 0 ; i<arraylength ;i++)
    {

        if (array[i] == "right")
        {
            rotation=+90;

        }
       else if (array[i] == "left")
        {
            rotation=-90;
        }
        sum=sum+rotation;
        
    

    
    }
    if (sum<0)
    {
        sum=-1 * (sum);
    }
    else 
    {
        sum=sum;
    }
    answer=sum/360;
    return answer;
    
}

  



