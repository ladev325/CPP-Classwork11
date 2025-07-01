#include "Forum.h"

Forum::Forum()
{
}

void Forum::addUser(string username, string password)
{
	auto it = users.find(username);
	if (it == users.end()) {
		users[username] = password;
		cout << "User added" << endl;
	}
	else {
		cout << "Fail while adding: user already exists" << endl;
	}
}

void Forum::loginUser(string username, string password)
{
	auto it = users.find(username);
	if (it == users.end()) {
		cout << "Error: no such user" << endl;
		return;
	}
	if (it->second != password) {
		cout << "Error: wrong password" << endl;
		return;
	}

	bool logged = false;
	for (int i = 0; i < signInUsers.size(); i ++) {
		if (signInUsers[i] == username) {
			logged = true;
			break;
		}
	}
	if (logged) {
		cout << "Already logged in" << endl;
		return;
	}
	signInUsers.push_back(username);
	cout << username << " logged in" << endl;

}

void Forum::logoutUser(string username, string password)
{
	auto it = users.find(username);
	if (it == users.end()) {
		cout << "Error: no such user" << endl;
		return;
	}

	bool logged = false;
	for (int i = 0; i < signInUsers.size(); i ++) {
		if (signInUsers[i] == username) {
			logged = true;
			break;
		}
	}
	if (!logged) {
		cout << "Already logged out" << endl;
		return;
	}

	signInUsers.erase(find(signInUsers.begin(), signInUsers.end(), username));
	cout << username << " logged out" << endl;
}
