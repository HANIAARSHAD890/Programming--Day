
#include <iostream>
using namespace std;
void convertPINToDance(string pin);
int number(char num);
main()
{
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;
    convertPINToDance(pin);
}
void convertPINToDance(string pin)
{
    int sum = 0;
    string result;
    int j = 3;
    while (j != -1)
    {
        for (int i = 0; i <= 9; i++)
        {
            if (number(pin[j]) == i)
            {
                sum = sum + 1;
            }
        }
        j--;
    }
    
    if (sum == 4)
    {
        cout << "Valid input";
    }
    else
    {
        cout << "Invalid Input";
    }
}
int number(char num)
{
    int Num = 0;

    if (num == '0')
    {
        Num = 0;
    }
    else if (num == '1')
    {
        Num = 1;
    }
    else if (num == '2')
    {
        Num = 2;
    }
    else if (num == '3')
    {
        Num = 3;
    }
    else if (num == '4')
    {
        Num = 4;
    }
    else if (num == '5')
    {
        Num = 5;
    }
    else if (num == '6')
    {
        Num = 6;
    }
    else if (num == '7')
    {
        Num = 7;
    }
    else if (num == '8')
    {
        Num = 8;
    }
    else if (num == '9')
    {
        Num = 9;
    }
    
    return Num;
}