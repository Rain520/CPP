//
// Created by R on 2022/9/12.
//

#include "Student.h"

Student::Student() {
    num = 20210000;
    school = "";
    major = "";
}

Student::Student(Person p,int num, string school, string major) {
    setName(p.getName());
    setSex(p.getSex());
    setAge(p.getAge());
    Student::num = num;
    Student::school = school;
    Student::major = major;
}


Student::Student(const Student &s) {
    setName(s.getName());
    setSex(s.getSex());
    setAge(s.getAge());
    num = s.num;
    school = s.school;
    major = s.major;
}

Student::~Student() {}

void Student::setNum(int num) {
    Student::num = num;
}

void Student::setSchool(const string &school) {
    Student::school = school;
}

void Student::setMajor(const string &major) {
    Student::major = major;
}

void Student::display() {
    Person::display();
    cout << "学号：" << num << endl;
    cout << "学校：" << school << endl;
    cout << "专业：" << major << endl;
}

int Student::getNum() const {
    return num;
}

const string &Student::getSchool() const {
    return school;
}

const string &Student::getMajor() const {
    return major;
}
