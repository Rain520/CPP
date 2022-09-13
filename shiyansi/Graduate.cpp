//
// Created by R on 2022/9/12.
//

#include "Graduate.h"

Graduate::Graduate() {
    Research_Direction = "";
}

Graduate::Graduate(Student s,string Research_Direction) {
    setName(s.getName());
    setSex(s.getSex());
    setAge(s.getAge());
    setSchool(s.getSchool());
    setMajor(s.getMajor());
    Graduate::Research_Direction = Research_Direction;
}

Graduate::Graduate(const Graduate &g) {
    setName(g.getName());
    setSex(g.getSex());
    setAge(g.getAge());
    setSchool(g.getSchool());
    setMajor(g.getMajor());
    Research_Direction = g.Research_Direction;
}

Graduate::~Graduate(){}


void Graduate::setResearchDirection(const string &researchDirection) {
    Research_Direction = researchDirection;
}


void Graduate::display() {
    Student::display();
    cout << "研究方向：" <<  Research_Direction << endl;
}