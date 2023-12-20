#include <iostream>
using namespace std;
 int multiply=1;
 int storedvalue=0;
 int storedPrimeno=0;
  int primeno=0;
  int isPrime(int i);




main()
{
     int i= 0;
     int result=0;
     isPrime(i);
    
 
    cout<<"Enter Number: ";
    cin>>i;
   
    result=isPrime(i);
    cout<<result;
  
}
    int isPrime(int i)

{
    for (int j=1;j<=i ;j++)
    {
        storedvalue=j;
       
      
      if(((((storedvalue%2==0)&& (storedvalue!=2)) || ((storedvalue%3==0)&& (storedvalue!=3)) || ((storedvalue%5==0)&& (storedvalue!=5)))||  (storedvalue==1)))
      {
        cout<<storedvalue<<endl;
      }
      else 
      {
        
        cout<<storedvalue;
        return storedvalue;
      }
    }



}

        



   





 


