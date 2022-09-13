//
// Created by R on 2022/9/6.
//

#ifndef SHIYANYI_DATE_H
#define SHIYANYI_DATE_H
#include<iostream>
using namespace std;


class Date{
public:
    Date(int year, int mon, int day);
    Date();
    Date(const Date& d);

    ~Date();

    void display();

    void changeDate(int year,int mon,int day);

    int year;
    int mon;
    int day;
};


#endif //SHIYANYI_DATE_H
