#include "UserInfo.hpp"
#include <iostream>

UserInfo::UserInfo() : username(""), password("") {
}

UserInfo::UserInfo(std::string username) : username(username), password("") {
}

UserInfo::UserInfo(std::string username, std::string password) : username(username), password(password) {
}

UserInfo::UserInfo(const UserInfo& rhs) {
	this->username = rhs.username;
	this->password = rhs.password;
}

void UserInfo::print() {
	std::cout << "Username: " << username << '\n';
	std::cout << "Password: " << password << '\n';
}