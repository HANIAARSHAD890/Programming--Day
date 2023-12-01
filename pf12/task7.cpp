#include <iostream>
using namespace std;

void printfootball(char ball[][16], int rowsize);
int number(char symbol[], int &number1, int &number2);
string printball(char symbol[], int &number1, int &number2, char ball[][16]);
bool isfield(char ball[][16], int &number1, int &number2);

int main() {
    int number1;
    int number2;
    int result1;
    string result2;
    bool result3;

    char symbol[2];
    const int rowsize = 7;
    const int colsize = 16;
    char ball[rowsize][colsize] = {
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    cout << "Enter coordinates to enter ball in the field (e.g., A1, B3, E5): " << endl;
    printfootball(ball, rowsize);
    cin >> symbol;
    result1 = number(symbol, number1, number2);
    cout << "Result: " << endl;
    printball(symbol, number1, number2, ball);
    printfootball(ball, rowsize);

    result3 = isfield(ball, number1, number2);
    cout << result3;
}

void printfootball(char ball[][16], int rowsize) {
    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < 16; j++) {
            cout << ball[i][j];
        }
        cout << endl;
    }
}

int number(char symbol[], int &number1, int &number2) {
    number1 = symbol[0];
    number1 = number1 - 65;
    number2 = symbol[1];
    number2 = number2 - 49;
}

string printball(char symbol[], int &number1, int &number2, char ball[][16]) {
    ball[number1][number2] = '0';
}

bool isfield(char ball[][16], int &number1, int &number2) {
    if ((number1 == 4) || (number1 == 5) || (number1 == 6) || (number2 == 0) || (number2 == 15)) {
        return false;
    }
    return true;
}
