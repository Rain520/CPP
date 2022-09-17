#include <iostream>
using namespace std;
#include "Songer.h"


void test01(){
    Songer s1("li",10);
    Songer s2("rui",11);
    Songer s3("feng",13);

    PK(s1, s2);

    s1.setFansCount(14);
    PK(s1, s2);

    Songer::showCount();

    Songer s(s1);

    Songer::showCount();

}

int main() {
    test01();
    return 0;
}
