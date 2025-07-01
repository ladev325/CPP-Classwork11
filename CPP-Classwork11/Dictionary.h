#pragma once
#include "Date.h"
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Dictionary {
public:
	Dictionary();
	void addWord(string en, string ua);
	void editWord(string en, string ua);
	void deleteWord(string en, string ua);
	string translate(string en);

	void saveToFile(string filename);
	void loadFromFile(string filename);

private:
	map<string, string> words;

};