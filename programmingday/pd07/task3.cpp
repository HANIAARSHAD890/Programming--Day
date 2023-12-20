#include <iostream>
using namespace std;




main()
{
     int num= 0;
    cout<<"Enter the number to Amplify: ";
    cin>>num;

    for(int sequence=1;sequence<=num;sequence++)
    { 
        
        if(sequence<num)
    {
       cout<<sequence;
       cout<<", ";
    }
        if((sequence==num) && (sequence%4!=0))
        {
        cout<<sequence;
        }
        
        else if(sequence%4==0)
        {
          sequence=sequence*10;
          cout<<sequence;
          
        }
    }
}

   





 


