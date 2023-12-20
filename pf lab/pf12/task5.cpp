#include <iostream>
using namespace std;
void printidentitymatrix(int arr[][3], int rowsize);
bool identitymatrix(int arr[][3], int rowsize);

int main() {
  const int rowsize = 3;
  const int colsize = 3;
  int check = 0;

  cout << "Enter the elements of the matrix:" << endl;

  int arr[rowsize][colsize];
  for (int row = 0; row < rowsize; row++) {
    for (int col = 0; col < colsize; col++) {
      cout << "Enter element at position [" << row << "][" << col << "]: ";
      cin >> arr[row][col];
    }
  }
  check = identitymatrix(arr, rowsize);
  cout << "The matrix you entered is:" << endl;
  printidentitymatrix(arr, rowsize);
  if (identitymatrix(arr, rowsize) == true) {
    cout << "The entered matrix is an identity matrix.";
  } else {

    cout << "The entered matrix is NOT an identity matrix.";
  }
}

void printidentitymatrix(int arr[][3], int rowsize) {

  for (int i = 0; i < rowsize; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arr[i][j];
      cout << "\t";
    }
    cout << endl;
  }
}
bool identitymatrix(int arr[][3], int rowsize) {
  int count = 0;
  for (int idx = 0; idx < 3; idx++) {
    count = 0;
    if (arr[idx][idx] == 1) {
      count++;
      if (count == 3) {
        return true;
      }
    }
  }
}