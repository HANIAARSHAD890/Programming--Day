
#include <iostream>
using namespace std;
void convertPINToDance ( string pin );
int calculation ( string pin );
string dancemovement (  int number );
    


main()
{
    string pin;

    cout << "Enter your PIN (4 digits): ";
    cin >> pin;
    convertPINToDance ( pin );

}
void convertPINToDance ( string pin )
{    
    int j=0;
    int num=0;
    int sum1=0;
 
    string result;
      
  

        if (calculation ( pin )  <  4 )

        {
            cout<< "Invalid Input"; 
        

        }

        else if  (calculation ( pin )  == 4 )
        {
       

        while ( j != 4 )
        {
        for (int i = 0; i <= 9; i++)
        {
             int number=pin[j];
             number = number - 48;
             num=number+j;
            
              
        if ((number) == i)
        {
              
           sum1 = sum1 + 1;
        }
        num=number+j;

        }
        j++;
        
       
      

         if (( j < 4))
        {
         cout<< dancemovement ( num );
        cout<<", ";
        }
        if ( j == 4)
        {
            cout<<dancemovement(num);

        }
        }
      


} 
}
      



int calculation ( string pin )
{
    int sum=0;
    string result;

        int z=0;
        while (z!=4)
        {
        for (int i = 0; i <= 9; i++)
        {
        
             int number1=pin[z];
             number1 = number1 - 48;
              
              
        if ((number1) == i)
        {

           sum = sum + 1;
        
        }
    
         
        }
    
             z++;

}  

 return sum;  
} 
     
   



string dancemovement (  int num )

{
    string movement;
     if (num>9)
    {
        num=num-10;
    }
   
    if (num == 0)
    {
        movement= "Shimmy" ;
    }
    else if (num == 1)
    {
        movement = "Shake";
    }
    else if (num == 2)
    {
        movement = "Pirouette";
    }
    else if (num == 3)
    {
        movement = "Slide";
    }
    else if (num == 4)
    {
        movement = "Box Step" ;
    }
    else if (num == 5)
    {
        movement = "Headspin";
    }
    else if (num == 6)
    {
        movement = "Dosado";
    }
    else if (num == 7)
    {
        movement = "Pop" ;
    }
    else if (num == 8)
    {
        movement = "Lock" ;
    }
    else if (num == 9)
    {
        movement = "Arabsque" ;
    }
    
    
    return movement;
}