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

int TimeInterval::getStartHour(){
	return startHour;
}

int TimeInterval::getStartMin(){
	return startMin;
}

int TimeInterval::getEndHour(){
	return endHour;
}

int TimeInterval::getEndMin(){
	return endMin;
}

bool TimeInterval::operator==(const TimeInterval& rhs) const{
	if(rhs == nullptr){
		return false;
	}
	if(this->getStartHour() == rhs.getStartHour() &&
		this->getStartMin() == rhs.getStartMin() &&
		this->getEndHour() == rhs.getEndHour() &&
		this->getEndMin() == rhs.getEndMin()){
			return true;
		}
	return false;
}