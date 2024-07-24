#include "Date.h"
#include <iostream>
#include <iomanip>

Date::Date(int d, int m, int y) 
	:day(d), month(m), year(y) {}

void Date::setDay(int d) {
	day = d;
}

void Date::setMonth(int m) {
	month = m;
}

void Date::setYear(int y) {
	year = y;
}

int Date::getDay() const{
	return day;
}

int Date::getMonth() const {
	return month;
}

int Date::getYear() const {
	return year;
}

void Date::displayDate() const {
	std::cout << std::setfill('0') << std::setw(2) << day << "/"
			<< std::setfill('0') << std::setw(2) << month << "/"
			<< year << std::endl;
}