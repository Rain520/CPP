#include <iostream>
using namespace std;
#include "Tree.h"
#include "Date.h"
#include "People.h"

void test01() {
    Tree t1,t2;
    t1.setAges(20);
    cout << "初始岁数：" ;
    t1.age();
    t1.grow(1);
    cout << "grow一年后的岁数：" ;
    t1.age();


    t2.setAges(18);
    cout << "初始岁数：" ;
    t2.age();
    t2.grow(2);
    cout << "grow两年后的岁数：" ;
    t2.age();

    cout << "--------" << endl;

}


void test02(){
    Date date1,date2;
    cout << "date1:" ;
    date1.display();
    cout << "date2:" ;
    date2.display();
    cout << "date1 和 date2 重新赋值：" << endl;
    date1.changeDate(2001, 10, 6);
    date2.changeDate(2000, 4, 29);
    cout << "date1:" ;
    date1.display();
    cout << "date2:" ;
    date2.display();
    Date date(date1);
    cout << "复制date1：" ;
    date.display();


    People p1(1, "li", 20215752, date1);
    People p2(2, "rui", 20212001, date2);

    cout << "people1:" << endl;
    p1.display();
    cout << "people2:" << endl;
    p2.display();

    p1.peopleInput(3,"feng",20212002,Date(2021,2,2));
    cout << "people1的重新输入:" << endl;
    p1.display();

    cout << "复制people1：" << endl;
    People p(p1);
    p.display();
}


int main(){
    //test01();
    test02();
    return 0;
}















