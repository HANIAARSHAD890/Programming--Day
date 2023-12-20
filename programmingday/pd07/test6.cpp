#include <iostream>
using namespace std;
int multiply = 1;
int storedvalue = 0;
int storedPrimeno = 0;
int sum = 0;
bool primeno(int number);
int calculateproduct(int number);

main() {
  int number = 0;
  int result;

  cout << "Enter Number: ";
  cin >> number;
  result = primeno(number);
  cout << result;
  calculateproduct(result);
}
bool primeno(int number) {

  if ((((number % 2 == 0) && (number != 2)) ||
       ((number % 3 == 0) && (number != 3)) ||
       ((number % 5 == 0) && (number != 5))) ||
      (number == 1)) {

    return false;

  } else {
    return true;
  }
}

int calculateproduct(int number) {
  cout << number;
  if (result == 1) {
    cout << "calculateproduct: " << result;
    result = sum;

    return result;
  }
}
