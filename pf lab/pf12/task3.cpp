#include <iostream>
using namespace std;
void printcars(int cars[][5],int rowsize);

    main() {

  const int rowsize = 5;
  const int colsize = 5;
  int cars[rowsize][colsize] =
  { {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5} };
  printcars(cars,rowsize);
  
    }
    void printcars(int cars[][5], int rowsize)
        {

   

      for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < 5; j++) {
          cout << cars[i][j];
          cout << "   ";
        }
        cout << endl;
      }
}