#include <iostream>
using namespace std;

float checkStudentStatus(int examHour,int examMinute,int studentHour,int studentMinute);

main()
{
    int examHour;
    int examMinute;
    int studentHour;
    int studentMinute;
    float minute;

   cout <<"Enter Exam Starting Time (hour): ";
   cin >>examHour;
   cout <<"Enter Exam Starting Time (minutes): ";
   cin>>examMinute;
   cout<<"Enter Student hour of arrival: ";
   cin>>studentHour;
   cout<<"Enter Student minutes of arrival: ";
   cin>>studentMinute;
   minute=checkStudentStatus(examHour,  examMinute, studentHour, studentMinute);
   if (minute!=0)
   {
    cout<<checkStudentStatus(examHour,  examMinute, studentHour, studentMinute);
   }




}

float  checkStudentStatus(int examHour,int examMinute,int studentHour,int studentMinute)
{
   float minute;


    if(examHour>studentHour)
 
   {
      if  (examMinute==0)
      {
        minute=60-studentMinute;
      }
      else if((examHour-studentHour==1)&&(examMinute<studentMinute))
      {
        minute=examMinute+(60-studentMinute);

      }
        else
      {
       minute=examMinute-studentMinute;

      }
      cout<<"Early" ;

   }

   else if (examHour<studentHour)
 {
    minute=examMinute+studentMinute;
    if(studentHour-examHour==1)
      {
        cout<<"minutes";
      }
     else  
      {
        cout<<"hours after the start";

      }
 }
     else  if ((examHour==studentHour)&&(examMinute==studentMinute))
      {
        cout<<"on time";
        minute=0;

      }
   return minute;
}

