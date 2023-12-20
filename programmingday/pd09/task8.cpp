
#include <iostream>
using namespace std;
string findBrokenKeys (string correctPhrase, string actualTyped);
main()
{
    string correctPhrase;
    string actualTyped;
    cout << "Enter the correct phrase: ";
    getline(cin,correctPhrase);
    cout << "Enter what you actually typed: ";
    getline(cin,actualTyped);
    cout << "Broken keys: ";
    findBrokenKeys (correctPhrase, actualTyped);

}
string findBrokenKeys (string correctPhrase, string actualTyped)
{
    bool check = false;
    string expression;
    int  count = 0;
     string phrase="";
   for(int i=0;correctPhrase[i]!='\0';i++)
   
   {  
    
        if ( correctPhrase[i] != actualTyped[i] )
    
        {
        for (int j =0;phrase[j]!=0;j++)
        {
          if (phrase[j] == correctPhrase[i])
                    {
                         continue;


                    }
                
                    else 
                    {
                      cout<< correctPhrase[i]; 
                    }

    
            phrase[i] = correctPhrase[i];
        

        }
      
        }
        else 
        {

            phrase = correctPhrase[i];

        }

   }
}

