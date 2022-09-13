//
// Created by R on 2022/9/12.
//

#ifndef SHIYANSI_STUDENT_H
#define SHIYANSI_STUDENT_H
#include "Person.h"

class Student : public Person{
public:
    Student();

    Student(Person p,int num, string school, string major);

    Student(const Student &s);

    ~Student();

    void setNum(int num);

    void setSchool(const string &school);

    void setMajor(const string &major);

    void display();

    int getNum() const;

    const string &getSchool() const;

    const string &getMajor() const;


private:
    int num;
    string school;
    string major;
};


#endif //SHIYANSI_STUDENT_H
