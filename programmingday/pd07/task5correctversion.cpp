#include <iostream>
using namespace std;
bool isPrime(int n,int number); 
int primeno=0;
int Primorial(int n,int number);
main()
{
       int n= 0;
       int checkprime=0;
       int number=2;
     cout<<"Enter Number: ";
     cin>>n;
     checkprime=Primorial(number,n);
     cout<<checkprime;
    

}
bool isPrime(int n,int number) 
{
  
      
      int result;
      int sum=0;
      for (int count=2;count<number;count++)
      {
        int result=0;
      if(number%count==0)
       { 
    
        result=false;
       }
        else 
        {
         
          result= true;
        

        }
        sum=sum+result;
    
}
  if ((number==1) || (number==0))
  {
    return false; 
  }

  if(sum<number-2)
  {
    return false;
  }
  else
  {
  return true;
  }
}
int Primorial(int number,int n)
{
  isPrime(n,number);
  int primorial=1; 

  int count=0;

 while(count<n)
{
  if(isPrime(n,number)==true)
  {
  primorial=primorial*number;
  
  count++;
  }
  number++;
}
 
 
 
   return primorial;


}



   

   





 


