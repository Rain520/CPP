//
// Created by R on 2022/9/6.
//

#include "Date.h"


Date::Date(int year, int mon, int day){
    Date::year = year;
    Date::mon = mon;
    Date::day = day;
}
Date::Date(){
    year = 2022;
    mon = 9;
    day = 10;
}

Date::Date(const Date &d) {
    year = d.year;
    mon = d.mon;
    day = d.day;
}

Date::~Date() {

}

void Date::display(){
    cout << year << "Äê" << mon << "ÔÂ" << day << "ÈÕ" << endl;
}

void Date::changeDate(int year,int mon,int day){
    Date::year = year;
    Date::mon = mon;
    Date::day = day;
}