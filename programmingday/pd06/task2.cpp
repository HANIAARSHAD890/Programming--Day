#include <iostream>
using namespace std;

string findzodiacsign(int day,string month);

main(){
    int day;
    string month;
    sttring result;
  
   cout<<"Enter the day of birth: ";
   cin>> day;
    cout <<"Enter the month of birth (e.g., January, February) : ";
     cin >> month;
    cout <<"Zodiac Sign: ";
    cout<<findzodiacsign(day,month)
    cin>>marksChemistry;
    cout<<"Enter marks for Social Science: ";
    cin>>marksSocialScience;
    cout<<"Enter marks for Biology: ";
    cin>>marksBiology;
    
    result1=
      calculateaverage( marksEnglish,marksMaths,marksChemistry,marksSocialScience,marksBiology);
      cout<<"Student Name: ";
      cout<<name<<endl;
      cout<<"Percentage: ";
      cout<<result1;
      cout<<"%"<<endl;
      result2=calculategrade(result1);
      cout<<"Grade: ";
      cout<<result2;
      

}


  float calculateaverage(float MarksEnglish,float marksMaths,float marksChemistry,float marksSocialScience,float marksBiology)
 {
 float percentage;
 percentage=((MarksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology)/500)*100;
 return percentage;
 }

 string calculategrade( float result1)
 {
 string result2;
 if((result1<=100) && (result1>=90))
 {
    result2 =  "A+"  ; 
 }
  if ((result1<90)&&(result1>=80))
  {
     result2 =  "A"  ;
  }
  if((result1<80 ) && (result1>=70))
 { 
  result2="B+";

 }
if ((result1<70)&&(result1>=60))
 {
  result2="B";
 }
 if((result1<60)&&(result1>=50))
 {
result2="C";

 }
 if((result1<50)&&(result1>=40))
 {
  result2="D";

 }
if((result1<40))
{
result2="F";

}

  return result2;
 }









