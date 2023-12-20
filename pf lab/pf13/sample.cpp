#include <iostream>
#include <fstream>
using namespace std;
void displaywords(string fileName);
bool checkcount(string word);
main()
{
	string fileName = "signin.txt";
	displaywords(fileName);
}

void displaywords(string fileName)
{
	string line;
	fstream file;
	file.open(fileName, ios:: in);
	while (!file.eof())
	{
	

		getline(file, line);
		for (int i = 0; line[i] != '\0'; i++)
		{
		
			word = word + line[i];
			if ((line[i] == ' ') )
			{
                
                if (word.length() <= 5)

                {
                      cout<<word;
					

					
               
                }
                
                 word = " ";
			
              
			}
		}
	}

	file.close();
}