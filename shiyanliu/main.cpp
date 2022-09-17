#include <iostream>
#include "Binary_Sort_Tree.h"

void print(Tree &tree){
    tree.show();
    cout << "--------" << endl;
}

void printf(Tree *tree){
    tree->show();
    cout << "--------" << endl;
}

void test01(){
    Tree t;
    print(t);

    Binary_Tree bt;
    print(bt);

    Binary_Sort_Tree bst;
    print(bst);
}

void test02(){
    Tree t;
    printf(&t);

    Binary_Tree bt;
    printf(&bt);

    Binary_Sort_Tree bst;
    printf(&bst);
}

void test03(){
    Tree *t1 = new Tree;
    delete t1;
    cout << "--------" << endl;

    Tree *t2 = new Binary_Tree;
    delete t2;
    cout << "--------" << endl;

    Tree *t3 = new Binary_Sort_Tree;
    delete t3;
    cout << "--------" << endl;
}

int main() {
    test01();
    test02();
    test03();
    return 0;
}
