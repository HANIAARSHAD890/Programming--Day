#include <iostream>
using namespace std;
float CalculateDamage(string yourtype,string opponenttype, int attackpower,int opponentdefense);

main()
{

  string yourtype;
  string opponenttype;
  int attackpower;
  int opponentdefense;
  int result;
  
  cout<<"Enter your type: ";
  cin>>yourtype;
  cout<<"Enter opponent's type: ";
  cin>> opponenttype;
  cout<<"Enter your attack power: ";
  cin>>attackpower;
  cout<<"Enter the opponent's defense: ";
  cin>>opponentdefense;
  
  result=CalculateDamage(yourtype, opponenttype,attackpower,opponentdefense);
  cout<<result;
 
}
float CalculateDamage(string yourtype,string opponenttype, int attackpower,int opponentdefense)

{
    float damage=0;
    damage=50*(attackpower/opponentdefense);
   
   

if(((yourtype=="fire")&&(opponenttype=="grass")) || ((yourtype=="grass")&&(opponenttype=="water")) || ((yourtype=="electric") &&(opponenttype=="water")) ||  ((yourtype=="water") && (opponenttype=="fire")))
{
damage=damage*2;
}
if (((yourtype=="grass")&&(opponenttype=="fire")) || ((yourtype=="fire") && (opponenttype=="water")) || ((yourtype=="water") || (opponenttype=="electric")) || ((yourtype=="water")&&(opponenttype=="grass")))
{
   
damage=damage*0.5;
}
if(((yourtype=="fire")&&(opponenttype=="electric"))|| ((yourtype=="electric")&&(opponenttype=="fire"))|| ((yourtype=="grass") && (opponenttype=="electric")) || ((yourtype=="electric") || (opponenttype=="grass")))
{
damage=damage*1;
}

 return damage;

}







 