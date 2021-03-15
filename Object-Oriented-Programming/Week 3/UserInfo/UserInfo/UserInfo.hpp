#pragma once
#include <string>

class UserInfo {
	std::string username;
	std::string password;
public:
	UserInfo();
	UserInfo(std::string username);
	UserInfo(std::string username, std::string password);
	UserInfo(const UserInfo& rhs);

	void print();
};