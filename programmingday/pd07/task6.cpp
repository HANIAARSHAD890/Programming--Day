#include <iostream>
using namespace std;
 int multiply=1;
 int storedvalue=0;
 int primeno=0;
 int CalculatePrime(int number);




main()
{
     int number= 0;
     int result;

    cout<<"Enter Number: ";
    cin>>number;
     for(int count=1;count<=number;count++)  
 {
    primeno= CalculatePrime(number);
    multiply=multiply*primeno;
}
    cout<<multiply;

    
}
    
 int CalculatePrime(int number)
    {
  storedvalue=number;
      
  
      if(((((storedvalue%2==0)&& (storedvalue!=2)) || ((storedvalue%3==0)&& (storedvalue!=3)) || ((storedvalue%5==0)&& (storedvalue!=5)))||  (storedvalue==1)))
      {
        
 

      }
      else 
   {
    
       primeno=storedvalue;

      }
     return primeno;
      }

     
  


   





 


