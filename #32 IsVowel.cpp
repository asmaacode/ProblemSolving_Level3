#include<iostream>
#include<cctype>
#include"myLibrary.h"
using namespace std;
using namespace myLibrary;

bool isVowel(char& letter) {
	string vowels = "aeoui";
	return (vowels.find(tolower(letter)) != vowels.npos) ? true : false;
}
int main() {
	char letter = readChar("Please enter the letter to check it :");
	if (isVowel(letter)) {
		cout << "\nYes,the Letter '" << letter << "' is vowel\n";
	}
	else {
		cout << "\nNo,the Letter '" << letter << "' is not a vowel\n";
	}

}
