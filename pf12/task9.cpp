#include <iostream>
using namespace std;
bool equalelemnets(int array[][3], int rowsize, int sameelementsarr[], int &sameelementcount);
int sameitration(int array[][3], int rowsize, int sameelementsarr[], int &sameelementcount);

main()
{
	int rowsize;
	int sameelementcount = 0;

	cout << "Enter the number of rows for the array: ";
	cin >> rowsize;
	int sameelementsarr[rowsize];
	int array[rowsize][3];

	cout << "Enter the elements of the array: " << endl;
	for (int i = 0; i < rowsize; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Enter element at position[" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
	}

	cout << "The count of identical rows in the array is: ";
	equalelemnets(array, rowsize, sameelementsarr, sameelementcount);
	sameitration(array, rowsize, sameelementsarr, sameelementcount);
}

bool equalelemnets(int array[][3], int rowsize, int sameelementsarr[], int &sameelementcount)
{
	int count = 0;
	int arraynumber;

	for (int i = 0; i < rowsize; i++)
	{
		arraynumber = array[i][0];
		count = 0;
		for (int j = 0; j < 3; j++)
		{
			if (arraynumber == array[i][j])
			{
				count++;
				if (count == 3)
				{
					sameelementsarr[i] = array[i][j];

					sameelementcount++;
				}
			}
		}
	}

	return true;
}

int sameitration(int array[][3], int rowsize, int sameelementsarr[], int &sameelementcount)
{
	int numbersame = sameelementsarr[0];
	int count = 0;

	for (int i = 0; i < sameelementcount; i++)
	{
		if (numbersame == sameelementsarr[i + 1])
		{
			count = count + 2;
		}
	}

	cout << count;
	return 0;
}