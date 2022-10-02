//
// Created by R on 2022/10/1.
//

#ifndef ZUOYEER_SET_H
#define ZUOYEER_SET_H
#include "Node.h"


class Set {
private:
    Node *head;
    int num;
public:
    Set();

    Set(int x);

    Set(const Set &s);

    ~Set();

    void Insert();

    void Insert(int x);

    void Print();

    void Delete();

    void Delete(int x);

    Set Intersection(Set const &s);

    Set Union(Set const &s);

    Set Different(Set const &s);

    bool operator==(Set const &s);

    bool operator>=(Set const &s);

    bool IsEmpty();

    int GetNum();

    void clear();
};


#endif //ZUOYEER_SET_H
