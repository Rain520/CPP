#include <iostream>
using namespace std;
#include "Songer.h"


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

void test01(){
    Songer s1("li",10);
    Songer s2("rui",11);
    Songer s3("feng",13);

    PK(s1, s2);

    s1.setFansCount(14);
    PK(s1, s2);

    Songer s(s1);

    Songer::showCount();

    cout << s1.count << endl;




}

int main() {
    test01();
    return 0;
}
