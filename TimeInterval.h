/*
 * TimeInterval.h
 *
 *  Created on: Dec 18, 2017
 *      Author: Anand Bhavsar
 */

#ifndef TIMEINTERVAL_H_
#define TIMEINTERVAL_H_

class TimeInterval {
private:
	int startHour, startMin, endHour, endMin;
public:
	TimeInterval(int startHour, int startMin, int endHour, int endMin);
	void adjustTime( int startHour, int startMin, int endHour, int endMin);
	int getStartHour();
	int getStartMin();
	int getEndHour();
	int getEndMin();
	
	bool operator==(const TimeInterval& rhs) const;
};

#endif /* TIMEINTERVAL_H_ */
