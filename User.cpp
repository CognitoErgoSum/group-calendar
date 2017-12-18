#include "User.h"

User::User(std::string name){
	this->name = name;
}

bool User::addTime(TimeInterval time, int dayOfWeek){
	bool exists;
	for( int i = 0; i < availableTimes[dayOfWeek].size(); i++){
		if( availableTimes[dayOfWeek][i] == time){
			exists = true;
		}
	}
	if( exists ){
		return false;
	} else {
		availableTimes[dayOfWeek].push_back(time);
		return true;
	}
}
