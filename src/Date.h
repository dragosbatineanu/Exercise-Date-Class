#pragma once

class Date {

private:
	int day;
	int month;
	int year;

public:

	Date(int d, int m, int y);

	//setter methods
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);

	//getter methods

	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void displayDate() const;
};