#include "Group.h"

Group::Group(std::string newGroupName){
	groupName = newGroupName;
}

bool Group::addUser(User newUser){
	for(int i = 0; i < users.size(); i++){
		if(users[i] == newUser){
			return false;
		}
	}
	users.push_back(newUser);
	return true;
}

bool Group::removeUser(User oldUser){
	for(int i = 0; i < users.size(); i++){
		if(users[i] == oldUser){
			users.erase(users.begin()+i-1);
			return true;
		}
	}
	return false;
}

