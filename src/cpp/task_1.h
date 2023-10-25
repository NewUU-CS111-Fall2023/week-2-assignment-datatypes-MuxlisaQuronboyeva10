/*
 * Author:
 * Date:
 * Name:
 */
// leapYear.h
#ifndef TASK_1_H
#define TASK_1_H

#include <iostream>

class LeapYear {
        public:
        void checkLeapYear() {
            int year;
            std::cout << "Enter a year: " << std::endl;
            std::cin >> year;

            if (year % 4 == 0)
                std::cout << year << " is a leap year." << std::endl;
            else
                std::cout << year << " is not a leap year." << std::endl;
        }
};

#endif // TASK_1_H
