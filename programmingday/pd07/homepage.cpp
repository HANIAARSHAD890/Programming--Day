#include <conio.h>
#include <iostream>
#include <windows.h>
#include<iomanip>
using namespace std;

bool checksignin(string signupname, string name[], int &usercount, string &signuprole, string role[], string &signuppassword, string password[],int &z);
bool checksignup(string signupname, string name[], int &usercount, string &signuprole, string role[], string &signuppassword, string password[]);

int menu();
int adminmenu();
bool Signup(string name[], string password[], string role[], int &usercount, string &signupname, string &signuprole, string &signuppassword,int &z);
int UISignup(string &signupname, string &signuppassword, string &signuprole);
string Signin(string name[], string password[], string role[], int &usercount, string &name1, string &signuprole, string &password1,int &z);
int UISignin(string &name1, string &password1);
void messopeningtimings(string &openbreakfasttime, string &opendinnertime, string &closebreakfasttime, string &closedinnertime);
void dinnerorbreakfast(string breakfast[],string dinner[],string days[]);
int customermenu();
void displayrates( string breakfast[],string dinner[],string days[],int ratesdinner[],int ratesbreakfast[]);
void changebackground(int backopt);
int backgroundoption();
string ratingstars();
string rateus();
string UIupdatemenu(string &day, string &breakfastordinner, string &updatedfood);
string updatemenu(string breakfast[],string dinner[], string days[],string &day,string &breakfastordinner,int &usercount,string &updatedfood);
int updaterates(int ratesbreakfast[],int ratesdinner[], string days[],string &day, string &breakfastordinner,int &usercount,int &updatedrate);
int UIupdaterates(string &day, string &breakfastordinner, int &updatedrate);
int i = 0;
void viewstars(string stars[], int i);
string UIupdatemesstimings(string &upgradefoodtimings, string &upgradedtimingsopen, string &upgradedtimingsclose);
string updatemesstimings(string &upgradefoodtimings, string &upgradedtimingsopen, string &upgradedtimingsclose, string &openbreakfasttime, string &opendinnertime, string &closebreakfasttime, string &closedinnertime);
string UIMessoff(string &messoffday, string &messofftime);
string messoff(string &messoffday, string &messofftime, int ratesbreakfast[], int ratesdinner[], string days[], int &usercount, string breakfast[], string dinner[]);
string UImarkattendance(string dayattendance[], string attendancebreakfast[], string attendancedinner[], int &z, int &j, string attendanceday[], string breakfastattendance[], string dinnerattendance[]);
string viewattendance(string name[], string attendanceday[], string breakfastattendance[], string dinnerattendance[]);
int calculateitrationbill(string dayattendance[], string days[], int &z);
int calculatebill(int billcalculation, int ratesbreakfast[], int ratesdinner[], int totalbills[], int &z, string attendancebreakfast[], string attendancedinner[], int &j,int bill[]);
int viewbill(int bill[],string name[],int &z);
  void menuheader();
  void customerprintmenu();
  void adminprintmenu();
  void displayrates();
  void themes();
  void timings();
  void themes();
  void viewrates();
  void attendance();
  void offmessprint();
  void messbill();
  void updatemenuu();
  void printmenu();

  int main()
  {
      string option1 = "";
      bool option2 = false;
      int usercount = 0;
      int z = 0;
      int j = 0;
      string name[10];
      string password[10];
      string role[10];
      string stars[10];
      string breakfast[7] = {"AndaParatha", "alooQeema", "daalChanay ", "alooAnday", "sabzeeChawal", "naanChannay ", "AlooParatha"};
      string dinner[7] = {"QuormaChicken", "  alooPalak  ", "  baryani  ", "  roastchips  ", "  cutlus  ", "maashKiDaal", "ChineseChawal"};
      string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
      int ratesbreakfast[7] = {150, 120, 100, 150, 140, 130, 170};
      int ratesdinner[7] = {150, 140, 120, 150, 130, 130, 180};
      string dayattendance[10];
      string attendancebreakfast[10];
      string attendancedinner[10];
      int bill[10];
      string attendanceday[100];
      string breakfastattendance[100];
      string dinnerattendance[100];
      int totalbills[10];
      string signupname;
      string signuprole;
      string signuppassword;
      string name1;
      string password1;
      string day;
      string breakfastordinner;
      string updatedfood;
      int updatedrate;
      string updatemenu6;
      int updaterate7 = 0;
      string upgradefoodtimings = "";
      string upgradedtimingsopen = "";
      string upgradedtimingsclose = "";
      string openbreakfasttime = "7:00am";
      string opendinnertime = "6:30pm";
      string closebreakfasttime = "10:00am";
      string closedinnertime = "7:30pm";
      string messoffday;
      string messofftime;
      string yesorno;
      string timingsattendance;

      // variables receiving the value from the function
      int option;
      int admin;
      int customer;
      int background;
      string rate;
      string Starview;
      int rateupdates = 0;
      string updatetimings = "";
      string offmess;
      string attendancemark = "";
      string attendanceview;
      int billcalculation = 0;
      int billcalculate = 0;
      //-------------------------------------------------

      while (option != 3)
      {
          menuheader();
          option = menu();

          if (option == 1)
          {
              

              UISignin(name1, password1);

              getch();
              system("cls");
              option1 = Signin(name, password, role, usercount, name1, signuprole, password1, z);
              if (option1 == "customer")
              {
                  customer = -1;
                  while (customer != 0)
                  {
                        customerprintmenu();
                      customer = customermenu();
                      getch();
                      system("cls");

                      if (customer == 1)
                      {
                          printmenu();
                          dinnerorbreakfast(breakfast, dinner, days);
                      }
                      else if (customer == 2)
                      {
                          displayrates();
                          displayrates(breakfast, dinner, days, ratesbreakfast, ratesdinner);
                      }
                      else if (customer == 3)
                      {
                          timings();
                          messopeningtimings(openbreakfasttime, opendinnertime, closebreakfasttime, closedinnertime);
                      }
                      else if (customer == 4)
                      {
                          themes();
                          background = backgroundoption();
                          changebackground(background);
                      }
                      else if (customer == 5)
                      {

                           displayrates();
                          rate = rateus();
                          if (rate == "yes")
                          {
                              stars[i] = ratingstars();
                              i++;
                          }
                      }
                      else if (customer == 6)
                      {
                      attendance();
                          attendancemark = UImarkattendance(dayattendance, attendancebreakfast, attendancedinner, z, j, attendanceday, breakfastattendance, dinnerattendance);
                      }
                      else if (customer == 7)
                      {
                       attendance();
                          attendanceview = viewattendance(name, attendanceday, breakfastattendance, dinnerattendance);
                      }

                      else if (customer == 8)
                      {
                         messbill();
                          billcalculation = calculateitrationbill(dayattendance, days, z);
                          billcalculate = calculatebill(billcalculation, ratesbreakfast, ratesdinner, totalbills, z, attendancebreakfast, attendancedinner, j, bill);
                          viewbill(bill, name, z);
                      }

                      getch();
                      system("cls");
                  }
              }
              else if (option1 == "admin")
              {
                  admin = -1;

                  while (admin != 0)
                  {
                      adminprintmenu();
                      admin = adminmenu();
                      getch();
                      system("cls");

                      if (admin == 1)
                      {

                          dinnerorbreakfast(breakfast, dinner, days);
                      }
                      else if (admin == 2)
                      {
                         displayrates();
                          displayrates(breakfast, dinner, days, ratesbreakfast, ratesdinner);
                      }
                      else if (admin == 3)
                      {
                          timings();
                          messopeningtimings(openbreakfasttime, opendinnertime, closebreakfasttime, closedinnertime);
                      }
                      else if (admin == 4)
                      {
                          themes();
                          background = backgroundoption();
                          changebackground(background);
                      }
                      else if (admin == 5)
                      {
                          viewrates();
                          viewstars(stars, i);
                      }
                      else if (admin == 6)
                      {
                          updatemenuu();
                          updatemenu6 = UIupdatemenu(day, breakfastordinner, updatedfood);
                          updatemenu(breakfast, dinner, days, day, breakfastordinner, usercount, updatedfood);
                      }
                      else if (admin == 7)
                      {
                        viewrates();

                          updaterate7 = UIupdaterates(day, breakfastordinner, updatedrate);

                          updaterates(ratesbreakfast, ratesdinner, days, day, breakfastordinner, usercount, updatedrate);
                      }
                      else if (admin == 8)
                      {
                        timings();
                          updatetimings = UIupdatemesstimings(upgradefoodtimings, upgradedtimingsopen, upgradedtimingsclose);
                          updatemesstimings(upgradefoodtimings, upgradedtimingsopen, upgradedtimingsclose, openbreakfasttime, opendinnertime, closebreakfasttime, closedinnertime);
                      }
                      else if (admin == 9)
                      {
                          offmessprint();
                          offmess = UIMessoff(messoffday, messofftime);
                          messoff(messoffday, messofftime, ratesbreakfast, ratesdinner, days, usercount, breakfast, dinner);
                      }
                      else if (admin == 10)
                      {
                          attendance();
                          attendanceview = viewattendance(name, attendanceday, breakfastattendance, dinnerattendance);
                      }
                      cout << "Press any key to continue";
                      getch();
                      system("cls");
                  }
              }
          }

          else if (option == 2)
          {
              UISignup(signupname, signuprole, signuppassword);
              getch();
              system("cls");
              option2 = Signup(name, password, role, usercount, signupname, signuprole, signuppassword, z);

              if (option2)
              {
                  cout << "Valid" << endl;
              }
              else
              {
                  cout << "Invalid" << endl;
              }
          }
      }

      return 0;
}


int menu() 
{
    int option;
    cout << "1. Sign in" << endl;
    cout << "2. Sign up" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your option: ";
    cin >> option;


    return option;
}

bool Signup(string name[], string password[], string role[], int &usercount, string &signupname, string &signuprole, string &signuppassword,int &z) 
{
    if (!checksignup(signupname, name, usercount, signuprole, role, signuppassword, password)) 
    {
        name[usercount] = signupname;
        password[usercount] = signuppassword;
        role[usercount] = signuprole;

        usercount++;
        cout << "Press any key to continue:"<<endl;
        return true;
    } 
    else 
    {
        cout << "Press any key to continue:"<<endl;
        return false;
    }
}
int UISignup(string &signupname, string &signuprole, string &signuppassword) 
{
    cout << "Name: ";
    cin >> signupname;
    cout << "User password: ";
    cin >> signuppassword;
    cout << "User role: ";
    cin >> signuprole;
    return 0;
}

string Signin(string name[], string password[], string role[], int &usercount, string &name1, string &signuprole, string &password1,int &z) 
{
    if (checksignin(name1, name, usercount, signuprole, role, password1, password,z)) 
    {
        string answer = "";
        cout << "Successfully sign in" << endl;
        cout << "Press any key to continue:"<<endl;
     answer=role[z];
     return answer;
    }
     else
     {
         cout << "Sorry, Failed to sign in. Try again." << endl;
         cout << "Press any key to continue:" << endl;
         return "0";
    }
}

int UISignin(string &name1, string &password1) 
{
    cout << "Name: ";
    cin >> name1;
    cout << "Password: ";
    cin >> password1;
    return 0;
}

bool checksignin(string signupname, string name[], int &usercount, string &signuprole, string role[], string &signuppassword, string password[],int&z) 
{
    for (int k = 0; k < usercount; k++) 
    {

        if ((name[k] == signupname) && (role[k] == signuprole) && (password[k] == signuppassword) ) 
        {
                 z = k;
            return true;

        }
       
    }

    return false;
}

bool checksignup(string signupname, string name[], int &usercount, string &signuprole, string role[], string &signuppassword, string password[]) 
{
    for (int k = 0; k < usercount; k++) 
    {

        if (((name[k] == signupname) && (role[k] == signuprole) && (password[k] == signuppassword) ) || (name[k]==signupname)) 
        {
        
            return true;

        }
       
    }

    return false;
}


void dinnerorbreakfast(string breakfast[] ,string dinner[],string days[]) 
{
    
    cout << "BREAKFAST                                        " << endl;                                                           
    cout << "*************************************************" << endl; 
    cout << left<<setw(20)<<"DAYS"<<left<<setw(20)<<"FOOD"<<left<<setw(20)<< endl;
    cout << "*************************************************" << endl;
    for (int i = 0; i <= 6; i++)
    {
    cout <<left<<setw(20)<<days[i]<<left<<setw(20)<<breakfast[i]<<left<<setw(20)<<endl;                            
    cout<< "*************************************************"  <<endl;
    }
    cout << endl;
    cout << endl;


    cout << " DINNER                                           " << endl;
    cout << " *************************************************" << endl;
    cout << left<<setw(20)<<"DAYS"<<left<<setw(20)<<"FOOD"<<left<<setw(20)<< endl;
    cout << " *************************************************" << endl;
    for (int i = 0; i <= 6; i++)
    {
     cout <<left<<setw(20)<<days[i]<<left<<setw(20)<<dinner[i]<<left<<setw(20)<<endl;                          
    cout <<  "*************************************************" <<endl;
    }                                                                               





}

int adminmenu()
{
    int option;
    cout<<"  1.see menu" << endl;
    cout<<"  2.display rates"<<endl;
    cout<<"  3.See timings   "<<endl;
    cout<<"  4.Change text colour"<<endl;
    cout<<"  5.View rates"<<endl;
    cout<<"  6.update menu"<<endl;
    cout<<"  7.update rates"<<endl;
    cout<<"  8.update timings" << endl;
    cout<<"  9.For closing of mess " << endl;
    cout<<"  10.view attendance" << endl;
    cout<<"  0.Back" << endl;
    cout<<"  Enter your option: " << endl;
    cin >> option;

    return option;



}
int customermenu()
{
  int option;
    cout<<"  1.see menu" << endl;
    cout<<"  2.display rates"<<endl;
    cout<<"  3.See timings   "<<endl;
    cout<<"  4.Change text colour"<<endl;
    cout<<"  5.Rate us "<<endl;
    cout<<"  6.Mark attendance" << endl;
    cout<<"  7.view attendance" << endl;
    cout<<"  8.View bill" << endl;
    cout<<"  0.Back"<<endl;
    cout<<"  Enter your option: " << endl;
    cin >> option;
    return option;



}
void displayrates(string breakfast[],string dinner[],string days[],int ratesbreakfast[],int ratesdinner[])

{
   cout<<" BREAKFAST                                          "<<endl;
   cout<<" ****************************************************************************"<<endl; 
  cout <<left<<setw(20)<<"DAYS"<<left<<setw(20)<<"FOODS"<<left<<setw(20)<<"RATES"<<endl; 
   cout<<" ****************************************************************************"<<endl;
     for (int i = 0; i <= 6; i++)
    {
    cout <<left<<setw(20)<<days[i]<<left<<setw(20)<<breakfast[i]<<left<<setw(20)<<ratesbreakfast[i]<<endl;                            
    cout<< "****************************************************************************"  <<endl;
    }
    cout << endl;
    cout << endl;

    cout << "DINNER"<<endl;                                                                    
    cout << " *******************************************************************************  " << endl;
   cout <<left<<setw(20)<<"DAYS"<<left<<setw(20)<<"FOODS"<<left<<setw(20)<<"RATES"<<endl; 
    cout << " *******************************************************************************  " << endl;
      for (int i = 0; i <= 6; i++)
    {
    cout <<left<<setw(20)<<days[i]<<left<<setw(20)<<dinner[i]<<left<<setw(20)<<ratesdinner[i]<<endl;                            
    cout<< "**********************************************************************************  " <<endl;
    }

}
void messopeningtimings(string &openbreakfasttime, string &opendinnertime ,string &closebreakfasttime, string &closedinnertime)
{
   
    cout<<"MESS OPENING TIMINGS"<<endl;
    cout<<""<<endl;
    cout << "FOR BREAKFAST   :";
    cout<<left<<setw(20)<<openbreakfasttime<<left<<setw(20)<<"to"<<left<<setw(20)<<closebreakfasttime<<endl;
    cout << "FOR DINNER   :";
      cout<<left<<setw(20)<<opendinnertime<<left<<setw(20)<<"to"<<left<<setw(20)<<closedinnertime<<endl;
}


    void changebackground(int backopt)
{
    if (backopt==1)
    {
         system("Color 09"); 
    }

   else  if (backopt==2)
    {
          system("Color 0A");  // first 0 = black background second A = light green 

    }
    else if (backopt==3)
    {
         system("Color 0D"); 
    }
}
int backgroundoption()
{
    int option=0;
    cout<<"which background you want to choose:"  <<endl;
    cout<<"1.BLUE"<<endl;
    cout<<"2.GREEN"<<endl;
    cout<<"3.PURPLE"<<endl;
    cout<<"Enter your option ..."<<endl;
    cin>>option;
    return option;
}
 


string rateus ()
{
 int i;
string yesorno;
cout<<"Do you  want to rate us?('yes ' OR 'no')"<<endl;
cin>>yesorno;

return yesorno;
}
string ratingstars()
{

    string star;
    cout<<"How was our service"<<endl;
    cout<<"1.*****"<<endl;
    cout<<"2.****"<<endl;
    cout<<"3.***"<<endl;
    cout<<"4.**"<<endl;
    cout<<"5.*"<<endl;
    cout<<"Enter your answer in steric form (i.e '*')"<<endl;
    cin>> star;
    cout<<"Thankyou for rating us";
    return star;
}
void viewstars(string stars[],int i)
{
    for (int a = 0; a < i; a++ )
{
    cout << "FEEDBACK NO. " << a+1 << endl;

    cout << stars[a];
    cout << "" << endl;
}

}
string UIupdatemenu(string &day,string &breakfastordinner,string &updatedfood)
{
   

     
    cout<< " Enter the day for which menu you want to update: ";
    cin >> day;
    cout << "Enter which type of food you want to update (i.e breakfast or dinner) ";
    cin >> breakfastordinner;
    cout << "Enter the updated food";
    cin >> updatedfood;
    return "0";
}


string updatemenu(string breakfast[],string dinner[], string days[],string &day,string &breakfastordinner,int &usercount,string &updatedfood) 
{
    string answer = " ";
    for (int k = 0; k < 7; k++) 
    {
        if ((days[k] == day) && (breakfastordinner == "breakfast"))
       
        {
            breakfast[k] = updatedfood;
            answer = breakfast[k];
        
        }
        else  if ((days[k] == day) && (breakfastordinner == "dinner"))
      {
           dinner[k] = updatedfood;
            answer = dinner[k];
        
      }
    }



    return answer;
}
int updaterates(int ratesbreakfast[],int ratesdinner[], string days[],string &day,string &breakfastordinner,int &usercount,int &updatedrate)
{
int answer = 0;
    for (int k = 0; k < 7; k++) 
    {
        if ((days[k] == day) && (breakfastordinner == "breakfast"))
       
        {
            ratesbreakfast[k] = updatedrate;
            answer = ratesbreakfast[k];
        
        }
        else  if ((days[k] == day) && (breakfastordinner == "dinner"))
      {
           ratesdinner[k] = updatedrate;
            answer = ratesdinner[k];
        
      }
    }
    }
   int UIupdaterates(string &day, string &breakfastordinner, int &updatedrate)
    {

         
    cout<< " Enter the day for which menu you want to update: ";
    cin >> day;
    cout << "Enter which type of food you want to update (i.e breakfast or dinner) ";
    cin >> breakfastordinner;
    cout << "Enter the updated rate ";
    cin >> updatedrate;
    return 0;
    }

    string UIupdatemesstimings( string &upgradefoodtimings,string &upgradedtimingsopen,string &upgradedtimingsclose )
    {

        cout << " For which type of food  do you want to upgrade the timings : (i.e breakfast or dinner) ";
        cin >> upgradefoodtimings;
        cout << "what are the timings (write in this format 'X:XX ')"<<endl;
        cout << "opening timings: ";
        cin >> upgradedtimingsopen;
        cout << "closing timings: ";
        cin >> upgradedtimingsclose;
    }
      string updatemesstimings( string &upgradefoodtimings,string &upgradedtimingsopen,string &upgradedtimingsclose ,string &openbreakfasttime, string &opendinnertime,string &closebreakfasttime, string &closedinnertime)
      {
        if (upgradefoodtimings=="breakfast")
        {
            openbreakfasttime = upgradedtimingsopen;
            closebreakfasttime = upgradedtimingsclose;
        }
        else  if (upgradefoodtimings=="dinner")
        {
          opendinnertime = upgradedtimingsopen;
            opendinnertime = upgradedtimingsclose;
        }
        return "0";
      }
      string UIMessoff( string &messoffday, string &messofftime)
    
      {

          cout << "Enter the day you wanted to off the mess?";
          cin >> messoffday;
          cout << "For which time you wanted to off (i.e 'beakfast' or 'dinner' )";
          cin >> messofftime;
          return "0";
      }
      string messoff(string &messoffday, string &messofftime,int ratesbreakfast[],int ratesdinner[], string days[],int &usercount,string breakfast[],string dinner[])
      {

     string answer = " ";
    for (int k = 0; k < 7; k++) 
    {
        if ((days[k] == messoffday) && (messofftime == "breakfast") )
       
        {

            breakfast[k] = "off";
            ratesbreakfast[k] = 0;
            answer = breakfast[k];
        
        }
        else  if ((days[k] == messoffday) && ( messofftime == "dinner"))
      {
           dinner[k] ="off";
           ratesdinner[k] = 0;
           answer = dinner[k];
        
      }
    }
    return answer;
      }

     string UImarkattendance(string dayattendance[], string attendancebreakfast[], string attendancedinner[], int &z,int &j, string attendanceday[],string breakfastattendance[],string  dinnerattendance[])
   {
       string yesorno;
       cout << "Do you want to mark your attendance?";
       cin >> yesorno;
       if (yesorno == "yes")
       {
           cout << "Enter the name of day(i.e Monday ,Tuesday etc)";
           cin >> dayattendance[z];
           attendanceday[j] = dayattendance[z];
           cout << "Do you want for breakfast? ('yes'  or 'no')";
           cin >> attendancebreakfast[z];
           breakfastattendance[j]=  attendancebreakfast[z];
           cout << "Do you want for dinner? ('yes'  or 'no')";
           cin >> attendancedinner[z];
           dinnerattendance[j] = attendancedinner[z];
           j++;
       }

       return "0";
      
          
      }
        string viewattendance(string name[],string attendanceday[],string breakfastattendance[],string  dinnerattendance[])
        {
        

            cout << " ATTENDANCE                                          " << endl;
            cout << "**************************************************************************************************" << endl;
            cout << left << setw(20) << "NAMES" << left << setw(20) << "DAY"<<left << setw(20) <<"BREAKFAST" <<left << setw(20) <<"DINNER"<< endl;
            cout << "**************************************************************************************************" << endl;
            for (int i = 0; i <= 100; i++)
            {
                cout << left << setw(20) <<name[i] << left << setw(20) << attendanceday[i]<<left << setw(20) <<breakfastattendance[i]<<left << setw(20) <<dinnerattendance[i]<< endl;
            
    }
    return "0";
                }
       int calculateitrationbill( string dayattendance[],string days[],int &z)
       {

           int j = 0;
           for (int i = 0; i <= 6;i++)
          {

            if (dayattendance[z]==days[i])
            {

                j = i;
            }
          }
           return j;
       }
      int calculatebill(int billcalculation,int ratesbreakfast[],int ratesdinner[],int totalbills[],int &z,string attendancebreakfast[], string attendancedinner[],int &j,int bill[])
      {
          totalbills = 0;

          for (int a = 0; a < j; a++)
          {
              if ((attendancebreakfast[z] == "yes") && (attendancedinner[z] == "yes"))
              {
                  totalbills[a] = ratesbreakfast[billcalculation] + ratesdinner[billcalculation];
              }
              else if ((attendancebreakfast[z] == "yes") && (attendancedinner[z] == "no"))
              {
                  totalbills[a] = ratesbreakfast[billcalculation];
              }
              else if ((attendancebreakfast[z] == "no") && (attendancedinner[z] == "yes"))
              {
                  totalbills[a] = ratesdinner[billcalculation];
              }
 bill[z]=bill[z] + totalbills[a];


          }

          return 0;
      }
      int viewbill ( int bill[],string name[],int &z)
       {
        cout << "BILL CALCULATION                                       " << endl;                                                           
    cout << "*************************************************" << endl; 
    cout << left<<setw(20)<<"NAMES"<<left<<setw(20)<<"BILLS"<<left<<setw(20)<< endl;
    cout << "*************************************************" << endl;
    for (int i = 0; i <= z; i++)
    {
        cout<<"itration: "<<i<<endl;
        cout << left << setw(20) << name[i] << left << setw(20) << bill[i] << left << setw(20) << endl;                            
    }
    return 0;
       }

    void menuheader()
    {
cout<<R"( ___ ___    ___  _____ _____     ____   ____  _      _      ____  ____    ____       _____ __ __  _____ __ __  ______    ___  ___ ___ )"<<endl;
cout<<R"(|   T   T  /  _]/ ___// ___/    |    \ l    j| T    | T    l    j|    \  /    T     / ___/|  T  T/ ___/|  T  T|      T  /  _]|   T   T)"<<endl;
cout<<R"(| _   _ | /  [_(   \_(   \_     |  o  ) |  T | |    | |     |  T |  _  YY   __j    (   \_ |  |  (   \_ |  |  ||      | /  [_ | _   _ |)"<<endl;
cout<<R"(|  \_/  |Y    _]\__  T\__  T    |     T |  | | l___ | l___  |  | |  |  ||  T  |     \__  T|  ~  |\__  T|  ~  |l_j  l_jY    _]|  \_/  |)"<<endl;
cout<<R"(|   |   ||   [_ /  \ |/  \ |    |  O  | |  | |     T|     T |  | |  |  ||  l_ |     /  \ |l___, |/  \ |l___, |  |  |  |   [_ |   |   |)"<<endl;
cout<<R"(|   |   ||     T\    |\    |    |     | j  l |     ||     | j  l |  |  ||     |     \    ||     !\    ||     !  |  |  |     T|   |   |)"<<endl;
cout<<R"(l___j___jl_____j \___j \___j    l_____j|____jl_____jl_____j|____jl__j__jl___,_j      \___jl____/  \___jl____/   l__j  l_____jl___j___j)"<<endl;
cout<<R"(                                                                                                                                      )"<<endl;
                                                                                                                                      
                                                                                                                                                    
}
void customerprintmenu()
{
cout<<R"(                   _                                                                )"<<endl;
cout<<R"(                  | |                                                               )"<<endl;
cout<<R"(  ___  _   _  ___ | |_   ___   _ __ ___    ___  _ __  _ __ ___    ___  _ __   _   _ )"<<endl;
cout<<R"( / __|| | | |/ __|| __| / _ \ | '_ ` _ \  / _ \| '__|| '_ ` _ \  / _ \| '_ \ | | | |)"<<endl;
cout<<R"( (__ | |_| |\__ \| |_ | (_) || | | | | ||  __/| |   | | | | | ||  __/| | | || |_| |)"<<endl;
cout<<R"( \___| \__,_||___/ \__| \___/ |_| |_| |_| \___||_|   |_| |_| |_| \___||_| |_| \__,_|)"<<endl;
cout<<R"(                                                                                  )"<<endl;
cout<<R"(                                                                                 )"<<endl;
}
void adminprintmenu()
{
cout<<R"(            _             _                                       )"<<endl;
cout<<R"(           | |           (_)                                      )"<<endl;
cout<<R"(  __ _   __| | _ __ ___   _  _ __   _ __ ___    ___  _ __   _   _ )"<<endl;
cout<<R"( / _` | / _` || '_ ` _ \ | || '_ \ | '_ ` _ \  / _ \| '_ \ | | | |)"<<endl;
cout<<R"(| (_| || (_| || | | | | || || | | || | | | | ||  __/| | | || |_| |)"<<endl;
cout<<R"( \__,_| \__,_||_| |_| |_||_||_| |_||_| |_| |_| \___||_| |_| \__,_|)"<<endl;
cout<<R"(                                                                  )"<<endl;
cout<<R"(                                                                  )"<<endl;

}
void displayrates()
{
cout<<R"(      _  _              _                              _              )"<<endl;
cout<<R"(    | |(_)            | |                            | |             )"<<endl;
cout<<R"(  __| | _  ___  _ __  | |  __ _  _   _   _ __   __ _ | |_   ___  ___ )"<<endl;
cout<<R"( / _` || |/ __|| '_ \\ | | / _` || | | | | '__| / _` || __| / _ \\/ __|)"<<endl;
cout<<R"(| (_| || |\\__ \\| |_) || || (_| || |_| | | |   | (_| || |_ |  __/\\__ \)"<<endl;
cout<<R"( \__,_||_||___/| .__/ |_| \__,_| \__, | |_|    \__,_| \__| \___||___/)"<<endl;
cout<<R"(               | |                __/ |                              )"<<endl;
cout<<R"(               |_|               |___/                               )"<<endl;
cout<<R"()"<<endl;
}
void timings()
{
cout<<R"())"<<endl;
cout<<R"( ___                                                                  )"<<endl;
cout<<R"((   )      .-.                  .-.                                   )"<<endl;
cout<<R"( | |_     ( __)  ___ .-. .-.   ( __)  ___ .-.     .--.       .--.     )"<<endl;
cout<<R"((   __)   (''") (   )   '   \\  (''") (   )   \   /    \    /  _  \    )"<<endl;
cout<<R"( | |       | |   |  .-.  .-. ;  | |   |  .-. .  ;  ,-. '  . .' `. ;   )"<<endl;
cout<<R"( | | ___   | |   | |  | |  | |  | |   | |  | |  | |  | |  | '   | |   )"<<endl;
cout<<R"( | |(   )  | |   | |  | |  | |  | |   | |  | |  | |  | |  _\\_`.(___)  )"<<endl;
cout<<R"( | | | |   | |   | |  | |  | |  | |   | |  | |  | |  | | (   ). '.    )"<<endl;
cout<<R"( | ' | |   | |   | |  | |  | |  | |   | |  | |  | '  | |  | |  `\ |   )"<<endl;
cout<<R"( ' `-' ;   | |   | |  | |  | |  | |   | |  | |  '  `-' |  ; '._,' '   )"<<endl;
cout<<R"(  `.__.   (___) (___)(___)(___)(___) (___)(___)  `.__. |   '.___.'    )"<<endl;
cout<<R"(                                                 ( `-' ;              )"<<endl;
cout<<R"(                                                  `.__.               )"<<endl;
}
void themes()
{
cout<<R"(______  __ __    ___  ___ ___    ___  _____)"<<endl;
cout<<R"(|      T|  T  T  /  _]|   T   T  /  _]/ ___/)"<<endl;
cout<<R"(|      ||  l  | /  [_ | _   _ | /  [_(   \_ )"<<endl;
cout<<R"(l_j  l_j|  _  |Y    _]|  \_/  |Y    _]\__  T)"<<endl;
cout<<R"(  |  |  |  |  ||   [_ |   |   ||   [_ /  \ |)"<<endl;
cout<<R"(  |  |  |  |  ||     T|   |   ||     T\    |)"<<endl;
cout<<R"(  l__j  l__j__jl_____jl___j___jl_____j \___j)"<<endl;
cout<<R"(                                            )"<<endl;
                                            
                                            
                                            
}
void viewrates()
{
cout<<R"( ____    ____  ______  ____    _____)"<<endl;
cout<<R"(|    \  /    T|      T|    \  / ___/)"<<endl;
cout<<R"(|  D  )Y  o  ||      ||  D  )(   \_ )"<<endl;
cout<<R"(|    / |     |l_j  l_j|    /  \__  T)"<<endl;
cout<<R"(|    \ |  _  |  |  |  |    \  /  \ |)"<<endl;
cout<<R"(|  .  Y|  |  |  |  |  |  .  Y \    |)"<<endl;
cout<<R"(l__j\_jl__j__j  l__j  l__j\_j  \___j)"<<endl;
cout<<R"(                                    )"<<endl;
                                    

}
void attendance()
{
cout<<R"( ____  ______  ______    ___  ____   ___     ____  ____     __    ___ )"<<endl;
cout<<R"( /    T|      T|      T  /  _]|    \ |   \   /    T|    \   /  ]  /  _])"<<endl;
cout<<R"(Y  o  ||      ||      | /  [_ |  _  Y|    \ Y  o  ||  _  Y /  /  /  [_ )"<<endl;
cout<<R"(|     |l_j  l_jl_j  l_jY    _]|  |  ||  D  Y|     ||  |  |/  /  Y    _])"<<endl;
cout<<R"(|  _  |  |  |    |  |  |   [_ |  |  ||     ||  _  ||  |  /   \_ |   [_ )"<<endl;
cout<<R"(|  |  |  |  |    |  |  |     T|  |  ||     ||  |  ||  |  \     ||     T)"<<endl;
cout<<R"(l__j__j  l__j    l__j  l_____jl__j__jl_____jl__j__jl__j__j\____jl_____j)"<<endl;
cout<<R"(                                                                       )"<<endl;
cout<<R"(                                                                       )"<<endl;
}
void offmessprint()
{
cout<<R"(  ___   _____  _____  ___ ___    ___  _____ _____)"<<endl;
cout<<R"( /   \ |     ||     ||   T   T  /  _]/ ___// ___/)"<<endl;
cout<<R"(Y     Y|   __j|   __j| _   _ | /  [_(   \_(   \_ )"<<endl;
cout<<R"(|  O  ||  l_  |  l_  |  \_/  |Y    _]\__  T\__  T)"<<endl;
cout<<R"(|     ||   _] |   _] |   |   ||   [_ /  \ |/  \ |)"<<endl;
cout<<R"(l     !|  T   |  T   |   |   ||     T\    |\    |)"<<endl;
cout<<R"( \___/ l__j   l__j   l___j___jl_____j \___j \___j)"<<endl;
cout<<R"(                                                 )"<<endl;                                        
}
void messbill()
{
cout<<R"(     ___ ___    ___  _____ _____     ____   ____  _      _     )"<<endl;
cout<<R"(|   T   T  /  _]/ ___// ___/    |    \ l    j| T    | T    )"<<endl;
cout<<R"(| _   _ | /  [_(   \_(   \_     |  o  ) |  T | |    | |    )"<<endl;
cout<<R"(|  \_/  |Y    _]\__  T\__  T    |     T |  | | l___ | l___ )"<<endl;
cout<<R"(|   |   ||   [_ /  \ |/  \ |    |  O  | |  | |     T|     T)"<<endl;
cout<<R"(|   |   ||     T\    |\    |    |     | j  l |     ||     |)"<<endl;
cout<<R"(l___j___jl_____j \___j \___j    l_____j|____jl_____jl_____j)"<<endl;
cout<<R"(                                                           )"<<endl;
}

void updatemenuu()
{
cout<<R"( __ __  ____   ___     ____  ______    ___      ___ ___    ___  ____   __ __ )"<<endl;
cout<<R"(|  T  T|    \ |   \   /    T|      T  /  _]    |   T   T  /  _]|    \ |  T  T)"<<endl;
cout<<R"(|  |  ||   _/ |  D  Y|     |l_j  l_jY    _]    |  \_/  |Y    _]|  |  ||  |  |)"<<endl;
cout<<R"(|  :  ||  |   |     ||  _  |  |  |  |   [_     |   |   ||   [_ |  |  ||  :  |)"<<endl;
cout<<R"(l     ||  |   |     ||  |  |  |  |  |     T    |   |   ||     T|  |  |l     |)"<<endl;
cout<<R"( \__,_jl__j   l_____jl__j__j  l__j  l_____j    l___j___jl_____jl__j__j \__,_j)"<<endl;
cout<<R"(                                                                             )"<<endl;
}

void printmenu()
{

cout<<R"()  ___ ___    ___  ____   __ __ )"<<endl;
cout<<R"()    |   T   T  /  _]|    \ |  T  T)"<<endl;
cout<<R"()    | _   _ | /  [_ |  _  Y|  |  |)"<<endl;
cout<<R"()    |  \_/  |Y    _]|  |  ||  |  |)"<<endl;
cout<<R"()    |   |   ||   [_ |  |  ||  :  |)"<<endl;
cout<<R"()    |   |   ||     T|  |  |l     |)"<<endl;
cout<<R"()    l___j___jl_____jl__j__j \__,_j)"<<endl;
cout<<R"()                                  )"<<endl;
}



                                                                                                             