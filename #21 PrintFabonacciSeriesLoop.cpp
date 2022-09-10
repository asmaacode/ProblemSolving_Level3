#include<iostream>
#include<iomanip>
#include"myLibrary.h"
using namespace std;
using namespace myLibrary;

const short rows = 3, cols = 3;

void fill2DArrayRandomly(int arr[rows][cols], int rows, int cols) {
	for (short row = 0; row < rows; row++)
		for (short col = 0; col < cols; col++) {
			arr[row][col] = generateRandomNumbers(0, 10);
		}

}
void print2DArrayElements(int arr[rows][cols], short rows, short cols) {
	for (short row = 0; row < rows; row++) {
		for (short col = 0; col < cols; col++) {
			printf("%0*d", 2, arr[row][col]);
			cout << setw(4) << "   ";
		}
		cout << endl;
	}
}
void printFabonacciSeries(int to) {
	int current = 0, prev = 1, afterPrev = 0;
	cout << "\n" << 1 << " ";
	for (int c = 1;c < to;c++) {
		current = prev + afterPrev;
		cout << current << " ";
		afterPrev = prev;
		prev = current;
	}
}

int main() {
	printFabonacciSeries(readNumberMsg("Print Fabonacci Series of "));
}
