//
// Created by R on 2022/9/8.
//

#include "Songer.h"

Songer::Songer(const string &name, int fansCount) : name(name), fans_count(fansCount) {
    count ++;
}

Songer::Songer(const Songer &s) {
    name = s.name;
    fans_count = s.fans_count;
    count ++;
}

Songer::~Songer() {
    count--;
}

void Songer::setFansCount(int fansCount) {
    fans_count = fansCount;
}

void Songer::showCount(){
    cout << "��ǰ�ĸ�����Ϊ��" << Songer::count <<  endl;
}

