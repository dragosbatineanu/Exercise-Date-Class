#include <iostream>
#include "Date.h"

int main() {

	int day;
	int month;
	int year;



	std::cout << "Enter date for the day:" << std::endl;
	std::cin >> day;
	std::cout << "Enter date for the month:" << std::endl;
	std::cin >> month;
	std::cout << "Enter date for the year:" << std::endl;
	std::cin >> year;

	Date date(day, month, year);

	std::cout << "The date is: ";
	date.displayDate();

	return 0;
}