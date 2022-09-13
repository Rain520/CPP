//
// Created by R on 2022/9/12.
//

#ifndef SHIYANSI_PERSON_H
#define SHIYANSI_PERSON_H
#include <iostream>
using namespace std;


class Person {
public:
    Person();

    Person(string name,string sex,int age);

    Person(const Person &p);

    ~Person();

    const string &getName() const;

    const string &getSex() const;

    int getAge() const;

    void setName(const string &name);

    void setSex(const string &sex);

    void setAge(int age);

    void display();

private:
    string name;
    string sex;
    int age;
};


#endif //SHIYANSI_PERSON_H
