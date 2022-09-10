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
void printFabonacciSeries(int num,int prev,int afterPrev) {
	int answer = 0;
	if (num > 0) {
		answer = prev + afterPrev;
		afterPrev = prev;
		prev = answer;
		cout << answer << " ";
		printFabonacciSeries(num - 1,prev,afterPrev);
	}

}

int main() {
	printFabonacciSeries(readNumberMsg("Print Fabonacci Series for : "), 0, 1);
}
