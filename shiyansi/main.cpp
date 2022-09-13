#include <iostream>
#include "Graduate.h"
using namespace std;

void test01(){
    Person p1;
    p1.display();
    cout << "--------" << endl;
    p1.setName("qq");
    p1.display();
    cout << "--------" << endl;
    Person p2("li", "男", 20);
    p2.display();
    cout << "--------" << endl;

    Person p(p2);
    p.display();
    cout << "--------" << endl;
}

void test02(){
    Student s1;
    s1.display();
    cout << "--------" << endl;
    s1.setAge(18);
    s1.setName("li");
    s1.setSchool("哈尔滨理工大学");
    s1.setMajor("计算机科学与技术");
    s1.display();
    cout << "--------" << endl;
    Student s2(Person("rui", "男", 20),20215752,"黑龙江大学","软件工程");
    s2.display();
    cout << "--------" << endl;
    Student s(s2);
    s.display();
    cout << "--------" << endl;
}

void test03(){
    Graduate g1;
    g1.display();
    cout << "--------" << endl;
    g1.setName("li");
    g1.setSchool("哈尔滨理工大学");
    g1.setMajor("计算机科学与技术");
    g1.setResearchDirection("考研");
    g1.display();
    cout << "--------" << endl;
    Graduate g2(Student(Person("rui", "男", 21), 20215752, "黑龙江大学", "软件工程"), "就业");
    g2.display();
    cout << "--------" << endl;
    Graduate g(g2);
    g.display();

}


int main() {
    test01();
    test02();
    test03();
    return 0;
}
