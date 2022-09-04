#include<iostream>
#include<iomanip>
#include"myLibrary.h"
using namespace std;
using namespace myLibrary;

const short rows = 3, cols = 3;

void fill2DArrayRandomly(int arr[rows][cols], int rows, int cols) {
	for (short row = 0; row < rows; row++)
		for (short col = 0; col < cols; col++) {
			arr[row][col] = generateRandomNumbers(0, 1);
		}

}


void print2DArrayElements(int arr[rows][cols], short rows, short cols) {
	for (short row = 0; row < rows; row++) {
		for (short col = 0; col < rows; col++) {
			printf("%0*d",2, arr[row][col]);
			cout << setw(4) << "   ";
		}
		cout << endl;
	}
}

int countNumberInMatrix(int arr[rows][cols], short rows, short cols,int target) {
	int count = 0;
	for (short row = 0; row < rows; row++) {
		for (short col = 0; col < rows; col++) {
			if (target == arr[row][col]) count++;
		}
	}
	return count;
}
int enterTheTargetNumber() {
	return(readNumberMsg("Enter the number to count it :"));
}
int main() {
	srand(time(NULL));
	int arr[rows][cols]={{1,0,0},{5,3,0},{0,0,0}};
	//fill2DArrayRandomly(arr,rows,cols);
	print2DArrayElements(arr,rows,cols);
	int zerosCounts = countNumberInMatrix(arr, rows, cols, 0);
	int otherElementsCount = (rows * cols) - zerosCounts;
	if (zerosCounts > otherElementsCount) cout << "The matrix is a sparse\n";else cout << "The matrix is not a sparse\n";
}
