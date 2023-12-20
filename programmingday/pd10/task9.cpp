#include <iostream>
using namespace std;
int checkspecial(int array[],int arraylength);


main()
{
int arraylength;
 int result=0;
cout<<"Enter the length of the array: ";
cin>>arraylength;
int array [arraylength];
cout<<"Enter the elements of the array:"<<endl;
for(int i=0;i<arraylength;i++)

{
 
 cin>>array[i];



}


 cout<<"Special value: ";
 cout<<checkspecial( array,arraylength);
}

int checkspecial(int array[],int arraylength)
{
int check=0;
int answer=0;
int count=0;
int specialcount[arraylength];
for(int j=0;j<=arraylength;j++)
{
for (int z=0; z<arraylength;z++)
{

if (j<=array[z])
{
    count++;
}


}
specialcount[j]=count;
count=0;



}
for(int x=0;x<=arraylength;x++)
{  
    if (x == specialcount[x])
    {
        answer= x;
        return answer;
    }
    else 

    {
        answer= -1;
    }

    }


return answer;
}

  



