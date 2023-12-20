#include <iostream>
using namespace std;
bool isPrime(int number); 
int Primorial(int primeno);
int primorial;
int primeno;
int number= 0;
int result=0;

main()
{

    cout<<"Enter Number: ";
    cin>>number;
    result=Primorial(primeno);
    cout<<result;   
}
bool isPrime(int number) 
{
   
    if((((number%2==0)&& (number!=2)) || ((number%3==0)&& (number!=3)) || ((number%5==0)&& (number!=5)) || ((number%7==0)&&(number!=7)))&& (number==1))
    {
      return false;
        
    }
    else 
    {
    return true;
    }
    
}
    

int Primorial(int primeno)
 {
isPrime(number); 
int count;
while(count<number)
{
if (isPrime(number)==true) 
{
  primorial=primorial*number;
  count++;
}
number++;


}
  return primorial;

}




 


 







 


