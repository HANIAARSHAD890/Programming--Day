
#include <iostream>
using namespace std;
void longest7SegmentWord ( string word ); 


main()
{
    int number;
    cout << "Enter the number of the words: ";
    cin >> number;
    cout<<"Enter the words, one by one :"<<endl;
    string word[number];
     cout<<"Longest 7-segment word: ";
for(int idx=0; idx<number;idx++)
  {
    cin>>word[idx];
  }
  int hania=word[0][0];
  cout<<hania;
longest7SegmentWord ( word); 
  
}

void longest7SegmentWord ( string word[] )
{

for (int i = 0 ; word[i]!="/0"; i++)
{

if ((word[0][0]=='k')||((word[0][0])=='m')||(word[0][0]=='v')||(word[0][0]=='w')||(word[0][0]=='x'))
{
    continue;

}
/else 
{

  cout<<word[i];
}


}


}