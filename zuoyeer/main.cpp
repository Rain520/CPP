#include <iostream>
#include "Set.h"
using namespace std;


void test(){
    Set s;
    s.Insert();
    s.Insert();
    s.Insert();
    Set ss(s);
    s.Print();
}

/*
 * （1）增加元素
 * （2）删除元素
 * （3）显示所有元素
 */
void test01(){
    Set s;
    s.Print();
    s.Insert();
    s.Insert();
    s.Insert();
    s.Insert();
    s.Print();
    s.Delete();
    s.Print();
}

/*
 * （1）计算交集
 * （2）计算并集
 * （3）计算差集
 * （4）判断集合相等
 * （5）判断包含关系
 */
void test02(){
    Set s1,s2;
    s1.Insert();
    s1.Insert();
    s1.Insert();
    s1.Insert();
    cout << "--------" << endl;
    s2.Insert();
    s2.Insert();
    s2.Insert();
    s2.Insert();
    Set s = s1.Intersection(s2);
    cout << "交集为：" << endl;
    s.Print();
    cout << "并集为：" << endl;
    Set ss = s1.Union(s2);
    ss.Print();
    cout << "差集为：" << endl;
    Set sss = s1.Different(s2);
    sss.Print();
    cout << "--------" << endl;
    cout << "s1等于s2:" << (s1==s2) << endl;
    cout << "--------" << endl;
    cout << "s1包含s2:" << (s1>=s2) << endl;
}

/*
 * （1）判断为空集合
 * （2）显示集合大小
 * （3）清空集合
 */
void test03(){
    Set s;
    cout << "s为空集合:" << s.IsEmpty() << endl;
    s.Insert();
    cout << "s为空集合:" << s.IsEmpty() << endl;
    s.Insert();
    cout << "s的大小:" << s.GetNum() << endl;
    s.clear();
    cout << "s为空集合:" << s.IsEmpty() << endl;
}


int main() {
    //test();
    //test01();
    //test02();
    //test03();
    return 0;
}
