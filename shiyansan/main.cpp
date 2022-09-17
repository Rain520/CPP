#include <iostream>
using namespace std;
#include "Link.h"

void test01(){
    Link l(3);
    cout << "链表1：" << endl;
    l.LinkPrint();
    cout << "--------" << endl;
    l.Link_Insert(5);
    cout << "插入后："  << endl;
    l.LinkPrint();
    cout << "--------" << endl;
    l.Link_Delete();
    cout << "删除后：" << endl;
    l.LinkPrint();
    cout << "--------" << endl;
    Link p(l);
    cout << "复制链表：" << endl;
    p.LinkPrint();
    cout << "--------" << endl;
    p.Link_Insert(9);
    cout << "插入后：" << endl;
    p.LinkPrint();

    cout << "链表1的长度" << endl;
    cout << l.getNum() << endl;
    cout << "复制链表插入1个节点后的长度" << endl;
    cout << p.getNum() << endl;
}

int main() {
    test01();
    return 0;
}
