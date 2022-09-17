#include <iostream>
#include "Songer.h"

using namespace std;
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

bool operator==(Songer &s1,Songer &s2){
    if(s1.fans_count == s2.fans_count){
        return true;
    }
    return false;
}

ostream& operator<<(ostream &cout,const Songer &s) {
    cout << "姓名：" << s.getName() << endl;
    cout << "粉丝数：" << s.getFansCount() << endl;
    return cout;
}

void test01(){
    Songer s1("li", 10);
    cout << "歌手1的粉丝数：" << s1.getFansCount() << endl;
    s1+10;
    cout << "歌手1粉丝+10后的粉丝数：" << s1.getFansCount() << endl;
    cout << "--------" << endl;
}

void test02(){
    Songer s1("li", 10);
    Songer s2("rui", 20);
    cout << "(s1的粉丝数为10，s2的粉丝数为20）" << endl;
    cout << "当s1 > s2 时返回：" << (s1 > s2) << endl;
    cout << "当s2 > s1 时返回：" << (s2 > s1) << endl;
    cout << "--------" << endl;
}

void test03(){
    Songer s1("li", 10);
    Songer s2("rui", 20);
    Songer s3("feng", 20);
    cout << "(s1的粉丝数为10，s2的粉丝数为20,s3的粉丝数为30）" << endl;
    cout << "当(s1 == s2) 时返回：" << (s1 == s2) << endl;
    cout << "当(s2 == s3) 时返回：" << (s2 == s3) << endl;
    cout << "--------" << endl;
}

void test04(){
    Songer s1("li", 10);
    Songer s2("rui", 20);
    cout << "s1的粉丝数：" << s1.getFansCount() << endl;
    cout << "s1的粉丝数后++：" << (s1++).getFansCount() << endl;
    cout << "--------" << endl;
    cout << "s2的粉丝数：" << s2.getFansCount() << endl;
    cout << "s1的粉丝数先++：" << (++s2).getFansCount() << endl;
    cout << "--------" << endl;
}

void test05(){
    Songer s1("li", 10);
    cout << s1 << endl;
    cout << "--------" << endl;
}

int main() {
    test01();
    test02();
    test03();
    test04();
    test05();
    return 0;
}
