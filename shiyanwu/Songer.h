//
// Created by R on 2022/9/8.
//

#ifndef SHIYANYI_SONGER_H
#define SHIYANYI_SONGER_H
#include <iostream>
using namespace std;


class Songer {
    friend void PK(Songer &s1,Songer &s2);
    friend bool operator==(Songer &s1,Songer &s2);
    friend ostream &operator<<(ostream& cout,const Songer &s);
public:
    Songer();

    Songer(const string &name, int fansCount);

    Songer(const Songer &s);

    void setFansCount(int fansCount);

    ~Songer();

    static void showCount();

    static int count;

    int getFansCount() const;

    const string &getName() const;

    Songer operator+(int count);

    bool operator>(Songer &s);

    Songer& operator++();

    Songer operator++(int);






private:

    string name;
    int fans_count;

};


#endif //SHIYANYI_SONGER_H
