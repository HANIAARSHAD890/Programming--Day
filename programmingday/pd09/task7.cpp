
#include <iostream>
using namespace std;
void convertPINToDance ( string pin );
int calculation ( string pin );
string dancemovement (  int number );
int integer(char integer);
    


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
   int result;

      
  

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
           int number=integer(pin[j]);
            
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
    


        int z=0;
        while (z!=4)
        {
        for (int i = 0; i <= 9; i++)
        {
          int number2=integer(pin[z]);
           
              
        if ((number2) == i)
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
    string  moves [10]= {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
"Pop", "Lock", "Arabesque","\0"};
if (num > 9)
 {
    num = num -10;

 }
   movement=moves[num];
 

    
    
    return movement;
}
int integer(char integer)
{

  int number1=integer;
  number1 = number1 - 48;
  return number1;

    
}