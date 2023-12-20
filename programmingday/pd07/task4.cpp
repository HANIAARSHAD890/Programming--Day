#include <iostream>
using namespace std;
int triangularnumber(int num);



main()
{
     int num= 0;
     int result=0;
    cout<<"Enter number of Triangle: ";
    cin>>num;
    cout<<"Dots in the Triangle: ";
    
    result=triangularnumber(num);
    cout<<result;
}
int triangularnumber(int num)
{
    int sum=0;

    for(int i=1;i<=num;i++)
    { 
      sum=sum+i;  
        
    }
    return sum;
}

   





 


