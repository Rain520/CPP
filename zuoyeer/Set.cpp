//
// Created by R on 2022/10/1.
//

#include "Set.h"

Set::Set() {
    head = new Node(0);
    num = 0;
}

Set::Set(int x) {
    head = new Node(x);
    num = 0;
}

Set::Set(const Set &s) {
    num = s.num;
    head = new Node(0);
    Node *p = s.head;
    Node *hp = head;
    while (p->GetNext() != NULL) {
        Node *n = new Node(p->GetNext()->Getd());
        hp->SetNext(n);
        p = p->GetNext();
        hp = hp->GetNext();
    }
}

Set::~Set() {
    Node *hp;
    while(head->GetNext() != NULL){
        hp = head->GetNext();
        delete head;
        head = hp;
    }
    if(head != NULL) { delete head; }

    num = 0;
}

void Set::Insert(){
    cout << "请输入插入的值：" << endl;
    int x;
    cin >> x;
    if(head == NULL){
        Node *n = new Node(x);
        head->SetNext(n);
        num++;
        return;
    }
    Node *hp = head;
    while(hp->GetNext() != NULL && hp->GetNext()->Getd() != x ){
        hp = hp->GetNext();
    }
    if(hp->GetNext() == NULL){
        Node *n = new Node(x);
        hp->SetNext(n);
        num++;
    }
}

void Set::Insert(int x){
    if(head == NULL){
        Node *n = new Node(x);
        head->SetNext(n);
        num++;
        return;
    }
    Node *hp = head;
    while(hp->GetNext() != NULL && hp->GetNext()->Getd() != x ){
        hp = hp->GetNext();
    }
    if(hp->GetNext() == NULL){
        Node *n = new Node(x);
        hp->SetNext(n);
        num++;
    }
}

void Set::Print() {
    if (head->GetNext() == NULL) {
        cout << "NULL" << endl;
        return;
    }
    Node *hp = head;
    while (hp->GetNext() != NULL) {
        cout << hp->GetNext()->Getd() << endl;
        hp = hp->GetNext();
    }
}

void Set::Delete() {
    int x;
    cout << "请输入要删除的元素：";
    cin >> x;
    Node *hp = head;
    while (hp->GetNext() != NULL) {
        if(hp->GetNext()->Getd() != x){
            hp=hp->GetNext();
        }
        else{
            Node *s= hp->GetNext();
            hp->SetNext(hp->GetNext()->GetNext());
            s->SetNext(NULL);
            delete s;
            num--;
            return;
        }
    }
}

void Set::Delete(int x) {
    Node *hp = head;
    while (hp->GetNext() != NULL) {
        if(hp->GetNext()->Getd() != x){
            hp=hp->GetNext();
        }
        else{
            Node *s= hp->GetNext();
            hp->SetNext(hp->GetNext()->GetNext());
            s->SetNext(NULL);
            delete s;
            num--;
            return;
        }
    }
}

Set Set::Intersection(const Set &s) {
    Set p;
    Node *tem1 = head;
    while (tem1->GetNext() != NULL) {
        Node *tem2 = s.head;
        while (tem2->GetNext() != NULL) {
            if(tem2->GetNext()->Getd() != tem1->GetNext()->Getd()){
                tem2 = tem2->GetNext();
            }
            else{
                p.Insert(tem1->GetNext()->Getd());
                p.num++;
                break;
            }
        }
        tem1 = tem1->GetNext();
    }
    return p;
}

Set Set::Union(const Set &s) {
    Node *p1 = head;
    Node *p2 = s.head;
    Set p;
    while(p1->GetNext() || p2->GetNext()){
        p.Insert(p1->GetNext()->Getd());
        p.Insert(p2->GetNext()->Getd());
        p1 = p1->GetNext();
        p2 = p2->GetNext();
    }

    return p;
}

Set Set::Different(const Set &s) {
    Set tem(*this);
    Set p2 = this->Intersection(s);
    Node *p = p2.head;
    while (p->GetNext() != NULL) {
        tem.Delete(p->GetNext()->Getd());
        p = p->GetNext();
    }
    return tem;
}

bool Set::operator==(Set const &s){
    if(num != s.num){
        cout << "num" << endl;
        return false;
    }
    Node *p1= head;
    Node *p2 = s.head;
    while (p1->GetNext() != NULL) {
        if (p1->GetNext()->Getd() == p2->GetNext()->Getd()) {
            p1 = p1->GetNext();
            p2 = p2->GetNext();
        }
        else{
            return false;
        }
    }
    return true;
}

bool Set::operator>=(const Set &s) {
    Set tem = Union(s);
    if (tem.num == num) {
        return true;
    }
    else{
        return false;
    }
}


bool Set::IsEmpty() {
    if(num == 0){
        return true;
    }
    return false;
}

int Set::GetNum() {
    return num;
}


void Set::clear() {
    Node *p = head;
    while (p->GetNext() != NULL) {
        Delete(p->GetNext()->Getd());
    }
}
























