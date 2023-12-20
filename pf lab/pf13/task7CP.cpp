#include <iostream>
#include <fstream>
using namespace std;
void displaywords(string fileName);
bool checkcount(string word);
main()
{
	string fileName = "task7.txt";
	displaywords(fileName);
}

void displaywords(string fileName)
{
	string word;
	string sentence;

	int count = 0;
	string line;
	fstream file;
	file.open(fileName, ios:: in);
	while (!file.eof())
	{
	

		getline(file, line);
		for (int i = 0; line[i] != '\0'; i++)
		{
		
			word = word + line[i];
			if (word.length() <= 5)
			{
                
           cout<<word.length(); 
      }

               
                      cout<<word;
      else 
      {

    
                
                 word = "";
      }
              
		
		}
	}

	file.close();
}