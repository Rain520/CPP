//
// Created by R on 2022/9/12.
//

#ifndef SHIYANSI_GRADUATE_H
#define SHIYANSI_GRADUATE_H
#include "Student.h"

class Graduate : public Student{
public:
    Graduate();

    Graduate(Student s,string Research_Direction);

    Graduate(const Graduate &g);

    ~Graduate();

    void setResearchDirection(const string &researchDirection);

    void display();


private:
    string Research_Direction;
};


#endif //SHIYANSI_GRADUATE_H
