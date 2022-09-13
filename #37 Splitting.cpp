#include<iostream>
#include<iomanip>
#include"myLibrary.h"
using namespace std;
using namespace myLibrary;

vector<string> split(string& s, string delimtor = " ") {
	vector<string> words;
	short slicer = 0;
	string word = "";
	s = s + delimtor;
	while ((slicer = s.find(delimtor))!= s.npos) {
		word = s.substr(0, slicer);
		s = s.substr(slicer + 1, s.length());
		if (word != "" && word != delimtor)
			words.push_back(word);
	}
	return words;
}
void printWords(vector<string> words) {
	for (string word : words) {
		cout << word << "\n";
	}
}
int main() {
	string s = readText("Please enter the statement :");
	cout << "Words in your statement \n"; 
	printWords(split(s));
}
