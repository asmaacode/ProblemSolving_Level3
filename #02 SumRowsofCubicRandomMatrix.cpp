#include<iostream>
#include<iomanip>
#include "myLibrary.h"
using namespace std;
using namespace myLibrary;

void fill2DArrayRandomly(int arr[3][3]) {
	for (short row = 0; row < 3; row++)
		for (short j = 0; j < 3; j++) {
			arr[row][j] = generateRandomNumbers(-100, 102);
		}

}
void print2DArrayElements(int arr[3][3]) {
	for (short row = 0; row < 3; row++) {
		for (short j = 0; j < 3; j++) {
			cout << setw(3) << arr[row][j] << "   ";
		}
		cout << endl;
	}
}
void sumMatrixRowElements(int arr[3][3], int result[]) {
	for (short row = 0; row < 3; row++) {
		result[row] = 0;
		for (short j = 0; j < 3; j++) {
			result[row] = result[row] + arr[row][j];
		}

	}
}
void printArrayElements(int arr[]) {
	for (short row = 0; row < 3; row++) {
		cout << "Row "<<row+1<< " Sum : " <<setw(5) << arr[row] << "\n";
	}
	cout << endl;
}
int main() {
	srand((unsigned)time(NULL));
	int arr[3][3];
	int sumRows[3];
	fill2DArrayRandomly(arr);
	cout << "The following is a 3 * 3 random matrix: \n";
	print2DArrayElements(arr);

	sumMatrixRowElements(arr, sumRows);
	cout << "\n\n\nThe following are the sum of each row: \n";
	printArrayElements(sumRows);
	return 0;
}
