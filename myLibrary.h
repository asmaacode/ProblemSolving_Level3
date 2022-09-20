#pragma once
#pragma warning(disable : 4996) 
#include<ctime> 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
namespace myLibrary {
	#pragma region read
		int readNumber() {
			int userNumber = 0;
			cin >> userNumber;
			while (cin.fail())
			{
				// Explain error
				cout << "ERROR: A Number must be entered:\n";
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cin >> userNumber;
			}
			return  userNumber;
		}
		float readFloatNumber() {
			float userNumber = 0;
			while (!(cin >> userNumber))
			{
				// Explain error
				cout << "ERROR: A Number must be entered:\n";
				cin.clear();
				cin.ignore(132, '\n');
			}
			return  userNumber;
		}
		int readPositiveNumber() {
			int positiveNumber = 0;
			do {
				cout << "Please enter a number greater than zero :\n";
				positiveNumber = readNumber();
			} while (positiveNumber <= 0);

			return positiveNumber;
		}
		int readPositiveNumberMsg(string msg) {
			int positiveNumber = 0;
			do {
				cout << msg;
				positiveNumber = readNumber();
			} while (positiveNumber < 0);

			return positiveNumber;
		}
		int readNumberMsg(string msg) {
			int number = 0;
			cout << msg << "\n";
			number = readNumber();
			return number;
		}
		float readFloatNumberMsg(string msg) {
			float number = 0.0;
			cout << msg;
			number = readFloatNumber();
			return number;
		}
		string readText(string message) {
			string txt = "";
			cout << message;
			getline(cin, txt);
			return  txt;
		}
		char readChar(string message) {
			char txt = ' ';
			cout << message << "\n";
			cin >> txt;
			return  txt;
		}
		int readNumberInRangeMsg(string msg, int from, int to) {
			int number = 0;
			do {
				cout << msg;
				number = readNumber();
			} while (number > to || number < from);

			return number;
		}

	#pragma endregion
	
	enum randomOptions { smallLetter, capitalLetter, specialCharacter, digit };
	int generateRandomNumbers(int from, int to) {
		//in main call 	srand(time(NULL));
		return rand() % (to - from + 1) + from;//OR return (rand() % to) + from;
	}
	char getRandomCharachter(randomOptions randomType) {
		switch (randomType) {
		case randomOptions::smallLetter:
			return char(generateRandomNumbers(int('a'), int('z')));
			break;
		case randomOptions::capitalLetter:
			return char(generateRandomNumbers(int('A'), int('Z')));
			break;
		case randomOptions::specialCharacter:
			return (char)generateRandomNumbers(int('Z') + 1, 128);
			break;
		case randomOptions::digit:
			return (char)generateRandomNumbers(48, 57);
			break;
		}
	}
	
	enum enPrimStatus { NotPrime = false, Prime = true };
	enPrimStatus isPrime(int target) {
		if (target == 1)
			return enPrimStatus::Prime;
		for (int i = 2;i <= sqrt(target);i++) {
			if (target % i == 0)
				return enPrimStatus::NotPrime;
		}
		return enPrimStatus::Prime;

	}

	void swap(int& A, int& B) {
		int temp = A;
		A = B;
		B = temp;
	}
	void swap(int* A, int* B) {
		int temp = *A;
		*A = *B;
		*B = temp;
	}
	bool doYouQuestion(string msg) {
		char answer = 'N';
		cout << msg << "[Y / N]";
		cin >> answer;
		return ((answer == 'Y' || answer == 'y') ? true : false);
	}
}
