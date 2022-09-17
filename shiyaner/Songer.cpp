//
// Created by R on 2022/9/8.
//

#include "Songer.h"

int Songer::count = 0;

void PK(Songer &s1,Songer &s2){
    if(s1.fans_count > s2.fans_count){
        cout << s1.name << "սʤ" << s2.name << endl;
    }
    else if(s1.fans_count < s2.fans_count){
        cout << s2.name << "սʤ" << s1.name << endl;
    }
    else{
        cout << s1.name << "��" << s2.name << "��˿����ͬ" << endl;
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
    cout << "��ǰ�ĸ�����Ϊ��" << Songer::count <<  endl;
}

