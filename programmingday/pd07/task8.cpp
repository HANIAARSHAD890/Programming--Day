#include <iostream>
#include <iomanip> 
using namespace std;
float ton=0;
float count=0;
float sum=0;
float sum1=0;
float  sum2=0;
float sum3=0;
float percentage1=0;
float percentage2;
float  percentage3;
float averageprice=0;
float answer1;
float answer;



int main()
{
     cout<<"Enter the count of cargo for transportation: ";
     cin>>count;
    for(int sequence=1;sequence<=count;sequence++)
    {
   
    cout<<"Enter the tonnage of cargo ";
    
    for(int number=sequence;number<=sequence;number++)
    {
    
    
    cout<<sequence<<": ";
    cin>>ton;
   
     if (ton<=3)
     {
        
        sum1=sum1+ton;

     }
      if((ton>3) && (ton<=11))
     {

        
        sum2=sum2+ton;
     }
     if(ton>11)
    {
        
        sum3=sum3+ton;
    }
    sum=(sum1+sum2+sum3);
    }
}
percentage1=(sum1/sum)*100.00;
percentage2=(sum2/sum)*100.00;
percentage3=(sum3/sum)*100.00;
averageprice=(((sum1*200.00)+(sum2*175.00)+(sum3*120.00))/sum);
cout << fixed << setprecision(2);
cout<<averageprice<<endl;
cout<<percentage1;
cout<<"%"<<endl;
cout<<percentage2;
cout<<"%"<<endl;
cout<<percentage3;
cout<<"%"<<endl;

}


