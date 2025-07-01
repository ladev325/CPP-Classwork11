#include <iostream>
#include <string>
#include <map>
#include "Diary.h"
#include "Forum.h"
#include "Dictionary.h"
using namespace std;

int main() {
	/*string word;
	map<string, int> words;

	while (word != "stop") {
		cout << "Enter word: ";
		cin >> word;
		if (word == "stop") break;

		if (words.find(word) == words.end()) {
			//words.insert(pair<string, int>(word, 1));
			words[word] = 1; // те саме
		}
		else {
			words[word] ++;
		}
	}

	for (auto item : words) {
		cout << item.first << " ~ " << item.second << endl;
	}*/

	/*Diary Maksym;
	Maksym.addEvent(Date() - 1, "Sleep");
	Maksym.showAll();

	cout << "==============" << endl;
	Maksym.findByDate(Date() + 1);
	Maksym.findByDate(Date());

	cout << "==============" << endl;
	Maksym.delEvent(Date(), "Cpp");
	Maksym.delEvent(Date() - 1, "Sleep");
	Maksym.delEvent(Date() - 1, "C#");
	Maksym.showAll();*/
	
	/*Forum f;
	f.addUser("User1", "pass1");
	f.addUser("User2", "pass2");
	f.addUser("User3", "pass3");
	f.addUser("User3", "pass3");
	f.loginUser("User1", "pass1");
	f.loginUser("User1", "pass1");
	f.logoutUser("User1", "pass1");
	f.logoutUser("User2", "pass2");*/

	Dictionary d;
	d.loadFromFile("dict.txt");
	//d.addWord("Stone", "Kaminna");
	//d.addWord("You", "Ty");
	//d.addWord("Sky", "Nebo");
	//d.saveToFile("dict.txt");

	cout << d.translate("Sky") << endl;

}