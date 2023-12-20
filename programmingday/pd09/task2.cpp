#include <iostream>
using namespace std;
string containsSeven(int numbers[], int size);

main()
{
string result;
int size;
cout<<"Enter the size of Array: ";
cin>>size;
int numbers[size];
result=containsSeven(numbers,size);
cout<<result;

}
string containsSeven(int numbers[], int size)
{
    int sum=0;
    string result;
    bool check=false;
for(int i=1;i<=size;i++)
{
 cout<<"Enter Element "<<i<<": ";
 cin>>numbers[i];
 int answer=numbers[i];

 if (numbers[i]==7)
 {
  check=true;

 }
 
  while(numbers[i]/10!=0)
  {
    answer=numbers[i]%10;
    numbers[i]=numbers[i]/10;


  
if ((answer==7) || (numbers[i]==7))
{
check=true;
break;
}
else if (answer!=7)

{

 check=false;
}
 }
sum=sum+check;
}
if (sum==0)
{
result="there is no 7 in the array";
}
 if (sum>0)
{

result="Boom!";

}
return result;

}




