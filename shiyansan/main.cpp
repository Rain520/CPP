#include <iostream>
using namespace std;
#include "Link.h"

void test01(){
    Link l(3);
    l.LinkPrint();
    cout << "--------" << endl;
    l.Link_Insert(5);
    l.LinkPrint();
    cout << "--------" << endl;
    l.Link_Delete(0);
    l.LinkPrint();
    cout << "--------" << endl;
    Link p(l);
    p.LinkPrint();
    cout << "--------" << endl;
    p.Link_Insert(9);
    p.LinkPrint();

    cout << l.getNum() << endl;
    cout << p.getNum() << endl;
}

int main() {
    test01();
    return 0;
}
