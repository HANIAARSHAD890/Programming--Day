#include <iostream>
using namespace std;

void printmatrix(int rowsize, int array[][5]);
int largestsum(int sum[], int array[][5], int rowsize);
int isgreater(int sum[]);
int swapitrations(int greater, int array[][5], int rowsize);

int main() {
    int rowsize;
    int greater;
    int sum[5] = {0};
    
    cout << "Enter row size: ";
    cin >> rowsize;
    int array[rowsize][5];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }
    
    cout << endl;
    cout << "Original Matrix:" << endl;
    printmatrix(rowsize, array);
    cout << endl;
    cout << "Matrix after the largest column moved to the first:" << endl;

    largestsum(sum, array, rowsize);
    greater = isgreater(sum);
    swapitrations(greater, array, rowsize);
    printmatrix(rowsize, array);

    return 0;
}

void printmatrix(int rowsize, int array[][5]) {
    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int largestsum(int sum[], int array[][5], int rowsize) {
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < rowsize; i++) {
            sum[j] = sum[j] + array[i][j];
        }
    }
    return 0;
}

int isgreater(int sum[]) {
    int greatestitration;
    int max = sum[0];
    for (int i = 0; i < 5; i++) {
        if (max < sum[i]) {
            max = sum[i];
            greatestitration = i;
        }
    }
    return greatestitration;
}

int swapitrations(int greater, int array[][5], int rowsize) {
    int temporaryarr[rowsize][5];
    for (int i = 0; i < 3; i++) {
        temporaryarr[i][0] = array[i][0];
        array[i][0] = array[i][greater];
        array[i][greater] = temporaryarr[i][0];
    }
    return 0;
}
