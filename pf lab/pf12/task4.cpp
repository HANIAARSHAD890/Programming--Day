#include <iostream>
using namespace std;
int printsum(int arr[][3], int rowsize);

  int main() {
  int rowsize;
  const int colsize = 3;
  int sum = 0;

  cout << "Enter row size: ";
  cin >> rowsize;
  cout << "Enter the elements of the matrix:" << endl;

  int arr[rowsize][colsize];
  for (int row = 0; row < rowsize; row++) {
    for (int col = 0; col < colsize; col++) {
      cout <<"Enter element at position [" << row << "][" << col << "]: ";
      cin >> arr[row][col];
    }
  }
  sum = printsum(arr, rowsize);
  cout << "The sum of elements in the matrix is: ";
  cout << sum;
}
int printsum(int arr[][3], int rowsize) {
  int sum = 0;
  for (int row = 0; row < rowsize; row++) {
    for (int col = 0; col < 3; col++) {
      sum = sum + arr[row][col];
    }
  }
  return sum;
}
