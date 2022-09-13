//
// Created by R on 2022/9/6.
//

#ifndef SHIYANYI_PEOPLE_H
#define SHIYANYI_PEOPLE_H
#include<iostream>
#include "Date.h"
using namespace std;


class People{
public:
    People(int num,string name,int id,Date birth);
    People(const People &people);

    void peopleInput(int num,string name,int id,Date birth);
    void display();

    ~People();


    int num;
    string name;
    int id;
    Date birth;
};


#endif //SHIYANYI_PEOPLE_H
