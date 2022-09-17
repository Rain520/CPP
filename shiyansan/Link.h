//
// Created by R on 2022/9/11.
//

#ifndef SHIYANSAN_LINK_H
#define SHIYANSAN_LINK_H
#include "Node.h"


class Link {
public:
    Link();

    Link(int n);

    void LinkPrint();

    Node *GetHead();

    ~Link();

    void Link_Insert(int x);

    void Link_Delete();

    Link(Link &p);

    int getNum() const;


private:
    Node *head;
    int num;
};


#endif //SHIYANSAN_LINK_H
