#include<iostream>
#include<iomanip>
using namespace std;

void fill2DArray(int arr[3][3]) {
	short counter = 1;
	for (short row = 0; row < 3; row++)
		for (short col = 0; col < 3; col++) {
			arr[row][col] = counter;
			counter++;
		}

}
void printTranspose2DArray(int arr[3][3]) {
	for (short row = 0; row < 3; row++) {
		for (short col = 0; col < 3; col++) {
			cout << setw(3) << arr[col][row] << "   ";
		}
		cout << endl;
	}
}
void print2DArrayElements(int arr[3][3]) {
	for (short row = 0; row < 3; row++) {
		for (short col = 0; col < 3; col++) {
			cout << setw(3) << arr[row][col] << "   ";
		}
		cout << endl;
	}
}

int main() {
	int arr[3][3];
	fill2DArray(arr);
	cout << "The following is a 3 * 3 ordered matrix: \n";
	print2DArrayElements(arr);
	cout << "\n\nThe following is a 3 * 3 transposed matrix: \n";
	printTranspose2DArray(arr);
	return 0;
	//system("pause > 0");
}
