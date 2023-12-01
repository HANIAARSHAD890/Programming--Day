#include <iostream>
using namespace std;

int number(char symbol[], int &number1, int &number2);
string fire(char symbol[], int &number1, int &number2, string battleship[][5]);

int main() {
  int number1;
  int number2;
  char symbol[2];
  string battleship[5][5] = {{".", ".", ".", "*", "*"},
                             {".", "*", ".", ".", "."},
                             {".", "*", ".", ".", "."},
                             {".", "*", ".", ".", "."},
                             {".", ".", "*", "*", "."}};

  cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
  cin >> symbol;
  cout << "Result: " << fire(symbol, number1, number2, battleship) << endl;

  return 0;
}

int number(char symbol[], int &number1, int &number2) {
  number1 = symbol[0];
  number1 = number1 - 65;
  number2 = symbol[1];
  number2 = number2 - 49;

  return 0;
}

string fire(char symbol[], int &number1, int &number2, string battleship[][5]) {
  string fireball;
  number(symbol, number1, number2);

  if (battleship[number1][number2] == ".") {
    fireball = "splash";
  } else if (battleship[number1][number2] == "*") {
    fireball = "BOOM";
  }

  return fireball;
}
