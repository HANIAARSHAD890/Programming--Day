#include <iostream>
using namespace std;
 
int Longdistance(int number,int miles[]);
main()
{
    int number;
cout<<"Enter the number of Saturdays: ";
cin>>number;
int miles[number];
for(int i=1;i<=number;i++)

{
 cout<<"Enter miles run for Saturday "<<i<<": "; 
 cin>>miles[i];


}
cout<<"Total progress days: ";
Longdistance(number, miles);

}
int Longdistance(int number,int miles[])
{
    int sum=0;
    int fake=0;
    for (int j = 0;j<=number;j++)
    {

if ((miles [j] > fake ) )
{
    
sum++;



}
else 
{

    sum=sum+0;
}
fake=miles[sum];


 
}
cout<<sum;
}








