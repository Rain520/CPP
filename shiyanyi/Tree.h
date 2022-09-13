//
// Created by R on 2022/9/6.
//

#ifndef SHIYANYI_TREE_H
#define SHIYANYI_TREE_H
#include<iostream>
using namespace std;

class Tree{
public:
    Tree();
    void grow(int years);
    void age();
    int getAges()const;
    void setAges(int ages);

private:
    int ages;
};



#endif //SHIYANYI_TREE_H
