BSTNode *BST_Search(BiTree T,int key,BSTNode *&p){
    p=NULL;                             //p指向被查找的结点的双亲，用于插入和删除
    while(T!=NULL&&T->data){
        p=T;
        if(key<T->data)
            T=T->lchild;
        else
            T=T->rchild;
    }
    return T;
}
