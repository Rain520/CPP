//
// Created by R on 2022/9/11.
//

#include "Link.h"

Link::Link() {
    head = NULL;
    num = 0;
}

Link::Link(int n) {
    head = new Node(0);
    num = n;
    Node *hp = head;
    for(int i = 0; i<n;i++){
        Node *s = new Node();
        if(i == 0) {
            hp->SetNext(s);
        }
        else{
            Node *sp = head;
            int flag = 0;
            while(sp->GetNext() != NULL){
                if(sp->GetNext()->Getd() < s->Getd()){
                    sp = sp->GetNext();
                }
                else{
                    s->SetNext(sp->GetNext());
                    sp->SetNext(s);
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                sp->SetNext(s);
            }
        }
    }
}



void Link::LinkPrint() {
    Node *p = head;
    while(p->GetNext() != NULL){
        cout << p->GetNext()->Getd() << endl;
        p = p->GetNext();

    }
}

Node *Link::GetHead() {
    return head;
}

Link::~Link() {
    Node *hp;
    while(head->GetNext() != NULL){
        hp = head->GetNext();
        delete head;
        head = hp;
    }
    if(head != NULL) { delete head; }

    num = 0;
}

void Link::Link_Insert(int x){
    Node *n = new Node(x);
    Node *p = head;
    int flag = 0;
    while(p->GetNext() != NULL){
        if(p->GetNext()->Getd() < x){
            p = p->GetNext();
        }
        else{
            n->SetNext(p->GetNext());
            p->SetNext(n);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        p->SetNext(n);
    }
    num++;
}

void Link::Link_Delete() {
    int x;
    cout << "请输入要删除的元素：" << endl;
    cin >> x;
    Node *p = head;
    int flag = 0;
    while(p->GetNext() !=NULL){
        if(p->GetNext()->Getd() != x){
            p = p->GetNext();
        }
        else{
            Node *tem = p->GetNext();
            p->SetNext(p->GetNext()->GetNext());
            delete tem;
            num--;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "不存在值为" << x << "的节点！" << endl;
    }
}


Link::Link(Link &p) {
    head = new Node(0);
    Node *cp = head;
    Node *sp = p.head;

    while(sp->GetNext() != NULL){
        Node *s = new Node(*sp->GetNext());
        cp->SetNext(s);
        cp = cp->GetNext();
        sp = sp->GetNext();
    }
    num = p.num;
}

int Link::getNum() const {
    return num;
}







































