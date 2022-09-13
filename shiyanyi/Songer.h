//
// Created by R on 2022/9/8.
//

#ifndef SHIYANYI_SONGER_H
#define SHIYANYI_SONGER_H
#include <iostream>
using namespace std;


class Songer {
    friend void PK(Songer &s1,Songer &s2);
public:
    Songer(const string &name, int fansCount);

    Songer(const Songer &s);

    void setFansCount(int fansCount);

    ~Songer();

    static void showCount();

    static int count;

private:

    string name;
    int fans_count;

};


#endif //SHIYANYI_SONGER_H
