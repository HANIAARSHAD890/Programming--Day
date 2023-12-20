

#include <iostream>
using namespace std;
int coloringTime(string cols[], int size);
main()
{

int size;
int result;
cout<<"Enter the size of Array: ";
cin>>size;
string cols[size];
for(int i=1;i<=size;i++)
{
  cout<<"Enter Element "<<i<<": ";
  cin>>cols[i-1];

}

 result=coloringTime(cols, size);
 cout<<"Time to color: ";
 cout<<result;
cout<<" seconds";


result=coloringTime(cols,size);
}

int coloringTime(string cols[], int size)
{
int sum=0;
int result;
int colsquare;
int switchcolor;
int time;
for (int i=0;i<size-1;i++)
{
  if (cols[i]!=cols[i+1])
  {
 sum++;
  }
}
switchcolor=sum;
colsquare=size*2;
time=switchcolor+colsquare;
return time;
}