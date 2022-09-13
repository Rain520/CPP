//
// Created by R on 2022/9/11.
//

#ifndef SHIYANSAN_NODE_H
#define SHIYANSAN_NODE_H
#include <iostream>
using namespace std;


class Node {
public:
    Node();

    Node(Node &n);

    Node(int x);

    void SetNext(Node *p);

    int Getd();

    Node *GetNext();

    ~Node();

private:
    int data;
    Node *next;
};


#endif //SHIYANSAN_NODE_H
