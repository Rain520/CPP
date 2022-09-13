//
// Created by R on 2022/9/8.
//

#include "Songer.h"

Songer::Songer() {

}

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

int Songer::getFansCount() const {
    return fans_count;
}

const string &Songer::getName() const {
    return name;
}

Songer Songer::operator+(int count) {
        fans_count += count;
}

bool Songer::operator>(Songer &s) {
    if(fans_count > s.fans_count){
        return true;
    }
    return false;
}


Songer &Songer::operator++() {
    fans_count += 10;
    return *this;
}


Songer Songer::operator++(int) {
    Songer temp = *this;
    fans_count += 10;
    return temp;
}

