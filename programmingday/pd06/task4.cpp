#include <iostream>
using namespace std;

float cellularcompany(string servicecode,string calltime,float min);

main()
{
   string servicecode;
   string calltime;
   float min;

   cout << "Enter the service code (R/r for regular, P/p for premium): ";
   cin >>servicecode;
   if (servicecode=="P" || servicecode=="p")
   {
   cout << "Enter time of the call (D/d for day, N/n for night): ";
   cin >> calltime;
   }
   cout << "Enter the number of minutes used: ";
   cin>>min;
   cout<<"Service Type: ";
    if ((servicecode=="p") || (servicecode=="P"))
   {
     cout<<"Premium"<<endl;    
   }
   else if ((servicecode=="R" )||(servicecode== "r"))
   
   {
      cout<<"Regular"<<endl;
   }
   cout<<"Total Minutes Used: ";
   cout<<min;
   cout<<" minutes"<<endl;
   cout<<"Amount Due: $";
   cout<<cellularcompany(servicecode,calltime,min);
   cellularcompany(servicecode,calltime,min);



}

float cellularcompany(string servicecode,string calltime,float min)
{
   float minutessubtract;
   float minute;
   float remainingmin;
   float answer;

   if (((servicecode=="P") || (servicecode == "p")) && ((calltime == "N") || (calltime== "n")))
   {
      if  (min>=75)
      {
            minutessubtract=min-75;
            remainingmin=minutessubtract*0.10;
            answer=25+remainingmin;   

      }
      else if (min<75)
      {
        answer=25;

      }
      
   }
   else if ((((servicecode=="P") || (servicecode == "p"))) && ((calltime == "D") || (calltime== "d")))
   {

      if  (min>=100)
      {
            minutessubtract=minute-100;
            remainingmin=minutessubtract*0.05;
            answer=25+remainingmin;    

      }
      else if (min<100)
      answer=25;
   }
   else if ((servicecode=="R") || (servicecode == "r"))  
   {

      if  (min>=50)
      {
            minutessubtract=min-50;
            remainingmin=minutessubtract*0.20;
            answer=10+remainingmin;    

      }
      else if(min<50)
      {

        answer=10;
      }
   }
   
   return answer;
}