//计算二叉树双分支结点个数

//递归
int DsonNodes(BiTree T){
    if(T==NULL)
        return 0;
    else
        if(T->lchild&&T->rchild)
            return DsonNodes(T->lchild)+DsonNodes(T->rchild)+1;//双分支结点
    else
        return DsonNodes(T->lchild)+DsonNodes(T->rchild);//单分支或者叶子结点

}
