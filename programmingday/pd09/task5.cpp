#include <iostream>
using namespace std;
int commonCharacters(string word1,string word2);

main()
{
int result;
string word1;
string word2;
cout<<"Enter the first String: ";
cin>>word1;
cout<<"Enter the second String: ";
cin>>word2;
cout<<"Number of common characters"<<endl;
result=commonCharacters(word1,word2);
}
int commonCharacters(string word1,string word2)
{
    bool check=false;
    int sum=0;
    int count=0;
for(int i=0;word1[i]!='\0';i++)
{
int j=1;

if (word1[i]==word2[j-1])
{
    bool check=true;
    sum=sum+check;

}
if (word2[i]==word2[j])
{
    count++;


}
cout<<"sum: "<<sum<<endl;
   cout<<word2[j+1]<<endl;
j++;
 


}
}












