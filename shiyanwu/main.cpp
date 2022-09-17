#include <iostream>
#include "Songer.h"

using namespace std;
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

bool operator==(Songer &s1,Songer &s2){
    if(s1.fans_count == s2.fans_count){
        return true;
    }
    return false;
}

ostream& operator<<(ostream &cout,const Songer &s) {
    cout << "������" << s.getName() << endl;
    cout << "��˿����" << s.getFansCount() << endl;
    return cout;
}

void test01(){
    Songer s1("li", 10);
    cout << "����1�ķ�˿����" << s1.getFansCount() << endl;
    s1+10;
    cout << "����1��˿+10��ķ�˿����" << s1.getFansCount() << endl;
    cout << "--------" << endl;
}

void test02(){
    Songer s1("li", 10);
    Songer s2("rui", 20);
    cout << "(s1�ķ�˿��Ϊ10��s2�ķ�˿��Ϊ20��" << endl;
    cout << "��s1 > s2 ʱ���أ�" << (s1 > s2) << endl;
    cout << "��s2 > s1 ʱ���أ�" << (s2 > s1) << endl;
    cout << "--------" << endl;
}

void test03(){
    Songer s1("li", 10);
    Songer s2("rui", 20);
    Songer s3("feng", 20);
    cout << "(s1�ķ�˿��Ϊ10��s2�ķ�˿��Ϊ20,s3�ķ�˿��Ϊ30��" << endl;
    cout << "��(s1 == s2) ʱ���أ�" << (s1 == s2) << endl;
    cout << "��(s2 == s3) ʱ���أ�" << (s2 == s3) << endl;
    cout << "--------" << endl;
}

void test04(){
    Songer s1("li", 10);
    Songer s2("rui", 20);
    cout << "s1�ķ�˿����" << s1.getFansCount() << endl;
    cout << "s1�ķ�˿����++��" << (s1++).getFansCount() << endl;
    cout << "--------" << endl;
    cout << "s2�ķ�˿����" << s2.getFansCount() << endl;
    cout << "s1�ķ�˿����++��" << (++s2).getFansCount() << endl;
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
