#include <iostream>
using namespace std;
#include "Link.h"

void test01(){
    Link l(3);
    cout << "����1��" << endl;
    l.LinkPrint();
    cout << "--------" << endl;
    l.Link_Insert(5);
    cout << "�����"  << endl;
    l.LinkPrint();
    cout << "--------" << endl;
    l.Link_Delete();
    cout << "ɾ����" << endl;
    l.LinkPrint();
    cout << "--------" << endl;
    Link p(l);
    cout << "��������" << endl;
    p.LinkPrint();
    cout << "--------" << endl;
    p.Link_Insert(9);
    cout << "�����" << endl;
    p.LinkPrint();

    cout << "����1�ĳ���" << endl;
    cout << l.getNum() << endl;
    cout << "�����������1���ڵ��ĳ���" << endl;
    cout << p.getNum() << endl;
}

int main() {
    test01();
    return 0;
}
