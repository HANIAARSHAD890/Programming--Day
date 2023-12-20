#include <iostream>
using namespace std;

main()
{
     int num= 0;
     int patients=0;
     int sum1=0;
     int sum2=0;
     int sum=0;
     int treatedpatients=7;

    int untreatedpatients=0;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>days;
    for(int sequence=1;sequence<=days;sequence++)
    {
   
    cout<<"Number of patients who visited hospital on Day ";
    
    for(int number=sequence;number<=sequence;number++)
    {
   
    cout<<sequence<<": ";
    cin>>patients;
    
   
   

    if((patients-7>=0) && ((number%3)!=0))
    {  
        
    
          sum1=sum1+treatedpatients;
          sum2=sum2+patients-(treatedpatients);
    
        
    }
    

    else if((patients-7>=0) &&(number%3==0))
        {
            if(sum1<sum2)
            {
                 treatedpatients++;
            
            sum1=sum1+treatedpatients;
            sum2=sum2+patients-(treatedpatients);
            
            }


        
            if(sum1>=sum2)
            {
            treatedpatients=7;
            untreatedpatients=patients-7;
        

            }
        }
    
       else if(patients-7<0)
    {   
        sum1=sum1+patients;
    
       
        
    }
        
    
    

    }

    
    

    
 
    }
     cout<<"Treated Patients: ";
        cout<<sum1<<endl;
        cout<<"Untreated Patients: ";
        cout<<sum2<<endl;
   
}
   





  
   





 


