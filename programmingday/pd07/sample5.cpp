#include <iostream>
using namespace std;

int isSumofdigits(int number);
main()
{
  int number=0;
  int result=0;
    
  cout<<"Enter number:";
  cin>>number;
    result= isSumofdigits(number);
    cout<<"RESULT: ";
    cout<<result;

   
}
     
  int isSumofdigits(int number)
  {
  
   
    int sum=0;
    int count=0;
   while(number%10!=0)
{  
  
  
  
  
  int number2=0;

  number2=number%10;
  number=number/10;
  sum=sum+ number2;
 
  cout<<"sum "<<sum;
 


}
return sum;  

  }