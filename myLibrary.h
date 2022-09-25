#pragma once
#pragma warning(disable : 4996) 
#include<ctime> 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
namespace myLibrary {
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
	namespace read {
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
	}
	namespace draw {
		string generateLine(short length = 0, char symbol = '_') {
			string line = "";
			while (length != 0) {
				line += symbol;
				length--;
			}
			return line;
		}
		string generateTabs(short length = 0) {
			string tabs = "";
			while (length != 0) {
				tabs += " ";
				length--;
			}
			return tabs;
		}

	}
	namespace manipulators {
		vector<string> split(string& s, string delimiter = " ") {
			vector<string> words;
			int currentIndex = 0;
			string word = "";
			s = s + delimiter;
			while ((currentIndex = s.find(delimiter)) != s.npos) {
				word = s.substr(0, currentIndex);
				s.erase(0, currentIndex + delimiter.length());
				if (word != "" && word != delimiter)
					words.push_back(word);
			}
			return words;
		}
	}
}
