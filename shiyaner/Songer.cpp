//
// Created by R on 2022/9/8.
//

#include "Songer.h"

int Songer::count = 0;

void PK(Songer &s1,Songer &s2){
    if(s1.fans_count > s2.fans_count){
        cout << s1.name << "战胜" << s2.name << endl;
    }
    else if(s1.fans_count < s2.fans_count){
        cout << s2.name << "战胜" << s1.name << endl;
    }
    else{
        cout << s1.name << "和" << s2.name << "粉丝数相同" << endl;
    }
}

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
    cout << "当前的歌手数为：" << Songer::count <<  endl;
}

