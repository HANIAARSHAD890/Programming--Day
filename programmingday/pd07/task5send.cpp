#include <iostream>
using namespace std;
bool isPrime(int number); 
int primeno=0;
int Primorial(int primeno);


main()
{
     int number= 0;
     int result=0;
 
    cout<<"Enter Number: ";
    cin>>number;
    result=primeno;
    cout<<result;
    Primorial(primeno);
}
bool isPrime(int number) 
{
   
    if((((number%2==0)&& (number!=2)) || ((number%3==0)&& (number!=3)) || ((number%5==0)&& (number!=5))) && (number==1))
    {
      result=false;
        
    }
    else 
    {
    result= true;
    }
    return result;
    
}
int Primorial(int primeno)
{
  isPrime(number); 
  int count=0;
 while(count<number)
{
if (result==1)
{
  primorial=primorial*number;
  count++;
}
number++;


}
  return primorial;

}




   





 


