#include "Diary.h"

Diary::Diary()
{
	records[Date()].push_back("Cpp");
	records[Date(2026, 6, 20)].push_back("Birthday");
	records[Date(2026, 1, 1)].push_back("New year");
	records[Date()].push_back("Film");
	description = "-";
}

void Diary::addEvent(Date d, string description)
{
}

void Diary::showAll() const
{
}

void Diary::findByDate(Date d) const
{
}

void Diary::delEvent(Date date, string description)
{
}
