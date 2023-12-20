#include <iostream>
using namespace std;

int sortedweight(int weight[]);

int main()
{
    int result = 0;
    int weight[10];
    cout <<"Enter the weights of the 10 packages:" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> weight[i];
    }


    cout <<"Sorted array in ascending order: [";
   
   
    sortedweight(weight);
    for (int i = 0; i < 10; i++)
    {
         if(i==9)
    {
    cout<<weight[i];
    cout<<"]";
    }
    else
    {
       cout<<weight[i]; 
       cout<<", "; 
    }
  
    }

}

int sortedweight(int weight[])
{

   int j=0;
   int temporary=0;
  while(j!=10)
  {

  
        for (int i = j; i<=9; i++)
     {   
    if(weight[j]>weight[i])
    {
    
        temporary=weight[j];
         weight[j]=weight[i];
         weight[i]=temporary;

    }
    }

j++;
   
}
return weight[j];


}