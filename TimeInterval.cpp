/*
 * TimeInterval.cpp
 *
 *  Created on: Dec 18, 2017
 *      Author: Anand Bhavsar
 */

#include "TimeInterval.h"

TimeInterval::TimeInterval(int startHour, int startMin, int endHour, int endMin) {
	this->startHour = startHour;
	this->startMin = startMin;
	this->endHour = endHour;
	this->endMin = endMin;
}

void TimeInterval::adjustTime( int startHour, int startMin, int endHour, int endMin){
	startHour = startHour;
	startMin = startMin;
	endHour = endHour;
	endMin = endMin;
}

int TimeInterval::getStartHour() const{
	return startHour;
}

int TimeInterval::getStartMin() const{
	return startMin;
}

int TimeInterval::getEndHour() const{
	return endHour;
}

int TimeInterval::getEndMin() const{
	return endMin;
}

bool TimeInterval::operator==(const TimeInterval& rhs) const{
	if(this->getStartHour() == rhs.getStartHour() &&
		this->getStartMin() == rhs.getStartMin() &&
		this->getEndHour() == rhs.getEndHour() &&
		this->getEndMin() == rhs.getEndMin()){
			return true;
		}
	return false;
}