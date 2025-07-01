#pragma once
#include "Date.h"
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Forum {
public:
	Forum();
	void addUser(string username, string password);
	void loginUser(string username, string password);
	void logoutUser(string username, string password);

private:
	map<string, string> users;
	vector < string > signInUsers;
};