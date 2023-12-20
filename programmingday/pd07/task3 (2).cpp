#include <iostream>
using namespace std;




main()
{
     int num= 0;
     int multiply;
    cout<<"Enter the number to Amplify: ";
    cin>>num;

    for(int sequence=1;sequence<=num;sequence++)
    { 
        
        if((sequence<num) && (sequence%4!=0))
    {
       cout<<sequence;
       cout<<", ";
    }
   
    if((sequence==num) && (sequence%4!=0))
        {
        cout<<sequence;
       
        }
     if((sequence%4==0) && ((sequence<num)))
    {
          multiply=sequence*10;
          cout<<multiply;
          cout<<", ";
    }
     if((sequence%4==0) && ((sequence==num)))
    {
          multiply=sequence*10;
          cout<<multiply;
          
}
}
}
   





 


