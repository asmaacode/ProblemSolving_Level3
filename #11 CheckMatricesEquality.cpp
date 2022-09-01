#include<iostream>
#include<iomanip>
#include"myLibrary.h"
using namespace std;
using namespace myLibrary;

const short rows = 3, cols = 3;

void fill2DArrayRandomly(int arr[rows][cols], int rows, int cols) {
	for (short row = 0; row < rows; row++)
		for (short col = 0; col < cols; col++) {
			arr[row][col] = generateRandomNumbers(1, 9);
		}

}

void print2DArrayElements(int arr[rows][cols], short rows, short cols) {
	for (short row = 0; row < rows; row++) {
		for (short col = 0; col < rows; col++) {
			printf("%0*d", 2, arr[row][col]);
			cout << setw(4) << "   ";
		}
		cout << endl;
	}
}
int sumOfMatrix(int arr[rows][cols], short rows, short cols) {
	int sum = 0;
	for (short row = 0; row < rows; row++)
		for (short col = 0; col < cols; col++) {
			sum = sum + arr[row][col];
		}
	return sum;
}
bool checkMatricesEquality(int arr1[rows][cols], int arr2[rows][cols], short rows, short cols) {
	if (sumOfMatrix(arr1, rows, cols) == sumOfMatrix(arr2, rows, cols))
		return true;
	else
		return false;
}
int main() {
	srand(time(NULL));

	int arr1[rows][cols], arr2[rows][cols];
	fill2DArrayRandomly(arr1, rows, cols);
	fill2DArrayRandomly(arr2, rows, cols);

	cout << "Matrix 1: \n";
	print2DArrayElements(arr1, rows, cols);

	cout << "\n\n";

	cout << "Matrix 2: \n";
	print2DArrayElements(arr2, rows, cols);

	cout << "\n\n";


	checkMatricesEquality(arr1, arr2, rows, cols) ?
		cout << "Yes : Two matrices are equals." :
		cout << "No : Two matrices are not equals.";

	cout << endl;
	//system("pause > 0");
}
