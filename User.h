#ifndef USER_H_
#define USER_H_

#include <vector>
#include <string>
#include <unordered_set>
#include "TimeInterval.h"

class User{
	public:
		std::vector<TimeInterval> availableTimes[7];
		std::string name;
		User(std::string name);
		bool addTime( TimeInterval time, int dayOfWeek);
		bool deleteTime( TimeInterval time, int dayOfWeek);

		bool operator==(const User& rhs) const;

};

#endif
