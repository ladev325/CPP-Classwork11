#include "Diary.h"

Diary::Diary()
{
	records[Date()].push_back("Cpp");
	records[Date(2026, 6, 20)].push_back("Birthday");
	records[Date(2026, 1, 1)].push_back("New year");
	records[Date()].push_back("Film");
}

void Diary::addEvent(Date d, string description)
{
	records[d].push_back(description);
}

void Diary::showAll() const
{
	for (auto item : records) {
		cout << "[" << item.first << "] - " << endl;
		for (int i = 0; i < item.second.size(); i++) {
			cout << "\t" << item.second[i] << endl;
		}
	}
	cout << endl;
}

void Diary::findByDate(Date d) const
{
	auto it = records.find(d);
	if (it == records.end()) {
		cout << "No events to show" << endl;
	}
	else {
		for (int i = 0; i < it->second.size(); i++) {
			cout << it->second[i] << endl;
		}
	}
}

void Diary::delEvent(Date date, string description)
{
	auto it = records.find(date);
	if (it == records.end()) {
		cout << "No events to delete" << endl;
	}
	else {
		auto itEvent = find(it->second.begin(), it->second.end(), description);

		if (itEvent == it->second.end()) {
			cout << "No events to delete" << endl;
		}
		else {
			it->second.erase(itEvent);
			if (it->second.size() == 0) {
				cout << "Deleted date" << endl;
				records.erase(date);
			}
		}
	}
}
