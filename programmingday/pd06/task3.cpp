#include <iostream>
using namespace std;

string findzodiacsign(int day, string month);

main()
{
   int day;
   string month;
   string result;

   cout << "Enter the day of birth: ";
   cin >> day;
   cout << "Enter the month of birth (e.g., January, February): ";
   cin >> month;
   cout << "Zodiac Sign: "<< findzodiacsign(day, month);
}

string findzodiacsign(int day, string month)
{
   string result;

   if ((((day >= 21) && (day <= 31)) && (month == "March")) || ((month == "April") && ((day <= 19) && (day >= 1))))
   {
      result = "Aries";
   }
   else if ((((day >= 20) && (day <= 30)) && (month == "April")) || ((month == "May") && ((day <= 20) && (day >= 1))))
   {
      result = "Taurus";
   }
   else if ((((day >= 21) && (day <= 31)) && (month == "May")) || ((month == "June") && ((day <= 20) && (day >= 1))))
   {
      result = "Gemini";
   }
   else if ((((day >= 21) && (day <= 30)) && (month == "June")) || ((month == "July") && ((day <= 22) && (day >= 1))))
   {
      result = "Cancer";
   }
   else if ((((day >= 23) && (day <= 31)) && (month == "July")) || ((month == "August") && ((day <= 22) && (day >= 1))))
   {
      result = "Leo";
   }
   else if ((((day >= 23) && (day <= 31)) && (month == "August")) || ((month == "September") && ((day <= 22) && (day >= 1))))
   {
      result = "Virgo";
   }
   else if ((((day >= 23) && (day <= 30)) && (month == "September")) || ((month == "October") && ((day <= 22) && (day >= 1))))
   {
      result = "Libra";
   }
   else if ((((day >= 23) && (day <= 31)) && (month == "October")) || ((month == "November") && ((day <= 21) && (day >= 1))))
   {
      result = "Scorpio";
   }
   else if ((((day >= 22) && (day <= 30)) && (month == "November")) || ((month == "December") && ((day <= 21) && (day >= 1))))
   {
      result = "Sagittarius";
   }
   else if ((((day >= 22) && (day <= 31)) && (month == "December")) || ((month == "January") && ((day <= 19) && (day >= 1))))
   {
      result = "Capricorn";
   }
   else if ((((day >= 20) && (day <= 31)) && (month == "January")) || ((month == "February") && ((day <= 18) && (day >= 1))))
   {
      result = "Aquarius";
   }
   else if ((((day >= 19) && (day <= 28)) && (month == "February")) || ((month == "March") && ((day <= 20) && (day >= 1))))
   {
      result = "Pisces";
   }
   return result;
}
