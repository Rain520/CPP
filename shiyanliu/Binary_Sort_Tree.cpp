//
// Created by R on 2022/9/13.
//

#include "Binary_Sort_Tree.h"


Binary_Sort_Tree::~Binary_Sort_Tree()
{
    cout<<"析构一个二叉排序树对象!"<<endl;
}
void Binary_Sort_Tree::show()
{
    cout<<"二叉排序树首先是一颗二叉树！"<<endl;
    cout<<"如果左子树不空，左子树小于根节点！"<<endl;
    cout<<"如果右子树不空，右子树大于根节点！"<<endl;
}
