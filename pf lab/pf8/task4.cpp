#include <iostream>
using namespace std;
bool isPrime( int n); 
int primeno=0;
int Primorial(int n);
main()
{
       int n= 0;
       int checkprime=0;
       int number=2;
     cout<<"Enter Number: ";
     cin>>n;
     checkprime=Primorial(n);

    

}
bool isPrime(int n) 
{
  
      
      int result;
      int sum=0;
      for (int count=2;count<n;count++)
      {
        int result=0;
      if(n%count==0)
       { 
    
        result=false;
       }
        else 
        {
         
          result= true;
        

        }
        sum=sum+result;
    
}
  if ((n==1) || (n==0))
  {
    return false; 
  }

  if(sum<n-2)
  {
    return false;
  }
  else
  {
  return true;
  }
}
int Primorial(int n)
{
    
   cout<<n;

  int primorial=1; 

  int count=0;

 while(count<n)
{
     isPrime(n);
  if(isPrime(n)==true)
  {
  cout<<count<<endl;
  
   count++;
  }

}
 
 
 
   return n;


}



   

   





 














  
   





 


