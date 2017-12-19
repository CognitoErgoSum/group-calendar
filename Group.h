#ifndef GROUP_H_
#define GROUP_H_

#include <vector>
#include <string>

#include "User.h"
class Group{
private:
	std::vector<User> users;
	std::string groupName;

public:
	Group(std::string newGroupName);
	bool addUser( User newUser);
	bool removeUser( User oldUser);
};

#endif
