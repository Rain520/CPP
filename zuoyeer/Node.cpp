//
// Created by R on 2022/9/12.
//

#include "Node.h"

Node::Node(int x) {
    data = x;
    next = NULL;
}


Node::Node() {
    cout << "输入数据：";
    cin >> data;
    next = NULL;
}

void Node::SetNext(Node *p) { next = p; }

int Node::Getd() { return data; }

Node *Node::GetNext() { return next; }

Node::~Node() {
    cout << data << " 被析构！" << endl;
}