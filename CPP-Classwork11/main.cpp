#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	string word;
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
	}


}