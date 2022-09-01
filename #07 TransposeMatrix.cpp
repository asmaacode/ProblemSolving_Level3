#include<iostream>
#include<iomanip>
using namespace std;
const int rows = 3, cols = 3;

void fillOrdered2DArray(int arr[rows][cols], int rows, int cols) {
	short counter = 1;
	for (short row = 0; row < rows; row++)
		for (short col = 0; col < cols; col++) {
			arr[row][col] = counter;
			counter++;
		}

}
void transposeMatrix(int arr[rows][cols], int rows, int cols) {
	short counter = 1;
	for (short row = 0; row < rows; row++) {
		for (short col = 0; col < cols; col++) {
			arr[col][row] = counter;
			counter++;
		}
	}

}
void printTranspose2DArray(int arr[rows][cols]) {
	for (short row = 0; row < rows; row++) {
		for (short col = 0; col < rows; col++) {
			cout << setw(3) << arr[col][row] << "   ";
		}
		cout << endl;
	}
}
void print2DArrayElements(int arr[rows][cols]) {
	for (short row = 0; row < rows; row++) {
		for (short col = 0; col < rows; col++) {
			cout << setw(3) << arr[row][col] << "   ";
		}
		cout << endl;
	}
}

int main() {
	int arr[rows][cols], transposedArr[rows][cols];
	fillOrdered2DArray(arr,rows,cols);
	cout << "The following is a " << rows << " * " << cols << " ordered matrix: \n";
	print2DArrayElements(arr);

	transposeMatrix(transposedArr,rows,cols);

	cout << "\n\nThe following is a " << rows << " * " << cols << " transposed matrix: \n";
	print2DArrayElements(transposedArr);
	return 0;
	//system("pause > 0");
}
