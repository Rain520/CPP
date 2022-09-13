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
}

Songer::~Songer() {}

void Songer::setFansCount(int fansCount) {
    fans_count = fansCount;
}

void Songer::showCount(){
    cout << "当前的歌手数为：" << Songer::count <<  endl;
}

