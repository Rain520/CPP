//
// Created by R on 2022/9/6.
//

#include "Tree.h"



Tree::Tree(){
    ages = 0;
}
void Tree::grow(int years){
    ages += years;
}
void Tree::age(){
    cout << ages << endl;
}

int Tree::getAges() const {
    return ages;
}

void Tree::setAges(int ages) {
    Tree::ages = ages;
}
