#include "Dictionary.h"
#include <fstream>

Dictionary::Dictionary()
{
}

void Dictionary::addWord(string en, string ua)
{
	words[en] = ua;
}

void Dictionary::editWord(string en, string ua)
{
	auto it = words.find(en);
	if (it == words.end()) {
		cout << "No words to edit" << endl;
	}
	else {
		words[en] = ua;
	}
}

void Dictionary::deleteWord(string en, string ua)
{
	auto it = words.find(en);
	if (it == words.end()) {
		cout << "No words to edit" << endl;
	}
	else {
		words.erase(it);
	}
}

string Dictionary::translate(string en)
{
	return words[en];
}

void Dictionary::saveToFile(string filename)
{
	ofstream file(filename);
	if (file.is_open()) {
		for (auto it : words) {
			file << it.first << endl;
			file << it.second << endl;
		}
		file.close();
	}
}

void Dictionary::loadFromFile(string filename)
{
	ifstream file(filename);
	if (file.is_open()) {
		string en, ua;
		while (!file.eof()) {
			getline(file, en);
			getline(file, ua);
			words[en] = ua;
		}
		file.close();
	}
}
