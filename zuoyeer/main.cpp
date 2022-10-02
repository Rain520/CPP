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
 * ��1������Ԫ��
 * ��2��ɾ��Ԫ��
 * ��3����ʾ����Ԫ��
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
 * ��1�����㽻��
 * ��2�����㲢��
 * ��3������
 * ��4���жϼ������
 * ��5���жϰ�����ϵ
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
    cout << "����Ϊ��" << endl;
    s.Print();
    cout << "����Ϊ��" << endl;
    Set ss = s1.Union(s2);
    ss.Print();
    cout << "�Ϊ��" << endl;
    Set sss = s1.Different(s2);
    sss.Print();
    cout << "--------" << endl;
    cout << "s1����s2:" << (s1==s2) << endl;
    cout << "--------" << endl;
    cout << "s1����s2:" << (s1>=s2) << endl;
}

/*
 * ��1���ж�Ϊ�ռ���
 * ��2����ʾ���ϴ�С
 * ��3����ռ���
 */
void test03(){
    Set s;
    cout << "sΪ�ռ���:" << s.IsEmpty() << endl;
    s.Insert();
    cout << "sΪ�ռ���:" << s.IsEmpty() << endl;
    s.Insert();
    cout << "s�Ĵ�С:" << s.GetNum() << endl;
    s.clear();
    cout << "sΪ�ռ���:" << s.IsEmpty() << endl;
}


int main() {
    //test();
    //test01();
    //test02();
    //test03();
    return 0;
}
