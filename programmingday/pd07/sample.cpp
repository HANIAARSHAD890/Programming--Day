 
  #include <iostream>
  using namespace std;
  main()
{
int n1 = 0;
int n2 = 2;
int n3;
int sum=0;
int multiply=1;

cout<<"ENTER HOW MANY NUMBERS SUM :";
cin>>n3;
int next;
for(int x = 0; x < n3; x = x + 1)
{
next= n2 + 2;
cout << next << ", ";
n1 = n2;
n2 = next;
multiply=multiply*next;


}
cout<<"MULTIPLY:";
cout<<multiply;
}
