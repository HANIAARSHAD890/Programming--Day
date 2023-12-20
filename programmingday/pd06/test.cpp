#include <iostream>
using namespace std;

float calculatefruitprice(string fruit,string dayofweek,float quantity);

main()
{
    string fruit;
    string dayofweek;
    float  quantity;


   cout <<"Enter the fruit name: ";
   cin >>fruit;
   cout <<"Enter the day of week (e.g., Monday,Sunday): ";
   cin>>dayofweek;
   cout<<"Enter the quantity: ";
   cin>>quantity;
   cout<<calculatefruitprice( fruit,dayofweek,quantity);




}

float calculatefruitprice(string fruit,string dayofweek,float quantity)
{
   float price;
   int error;


 if (dayofweek=="Monday" || dayofweek=="Tuesday" ||(dayofweek=="Wednesday")||(dayofweek=="Thursday")||(dayofweek=="Friday")
           ||(dayofweek=="Saturday"))
 
   {
      if  (fruit=="banana")
      {
        price=quantity*2.50;
      }
        else if (fruit=="apple")
      {
        price=quantity*1.20;

      }
       else if (fruit=="orange")
      {
        price=quantity*0.85;

      }
      else if (fruit=="grapegruit")
      {
        price=quantity*1.45;

      }
       else if (fruit=="kiwi")
      {
        price=quantity*2.70;

      }
       else if (fruit=="pineapple")
      {
        price=quantity*5.50;

      }
      else if (fruit=="grapes")
      {
        price=quantity*3.85;
       }

   }

   else if (dayofweek=="Sunday")
 {
    if  (fruit=="banana")
      {
        price=quantity*2.70;
      }
     else  if (fruit=="apple")
      {
        price=quantity*1.25;

      }
     else  if (fruit=="orange")
      {
        price=quantity*0.90;

      }
      else if (fruit=="grapegruit")
      {
        price=quantity*1.60;

      }
      else if (fruit=="kiwi")
      {
        price=quantity*3.00;

      }
      else if (fruit=="pineapple")
      {
        price=quantity*5.60;

      }
       else  if (fruit=="grapes")
      {
        price=quantity*4.20;

      }
  
     }
     if (((fruit !="banana")||(fruit!="apple")||(fruit!="orange")||(fruit!="grapefruit")||(fruit!="kiwi")||(fruit!="pineapple")||(fruit!="grapes"))||
        ((dayofweek!="Monday")||(dayofweek!="Tuesday")||(dayofweek!="Wednesday")||(dayofweek!="Thursday")||(dayofweek!="Friday")||
        (dayofweek!="Saturday")||(dayofweek!="Sunday")))
        {
            cout<<"error";
            error==;
            return error;
        }
   
   return price;
}

