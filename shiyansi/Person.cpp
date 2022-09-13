//
// Created by R on 2022/9/12.
//

#include "Person.h"

Person::Person() {
    name = "";
    sex = "��";
    age = 0;
}

Person::Person(string name, string sex, int age) {
    Person::name = name;
    Person::sex = sex;
    Person::age = age;
}

Person::Person(const Person &p) {
    name = p.name;
    sex = p.sex;
    age = p.age;
}

Person::~Person() {}

const string &Person::getName() const {
    return name;
}

const string &Person::getSex() const {
    return sex;
}

int Person::getAge() const {
    return age;
}

void Person::setName(const string &name) {
    Person::name = name;
}

void Person::setSex(const string &sex) {
    Person::sex = sex;
}

void Person::setAge(int age) {
    Person::age = age;
}


void Person::display() {
    cout << "������" << name << endl;
    cout << "�Ա�" << sex << endl;
    cout << "���䣺" << age << endl;
}