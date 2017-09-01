int BST_Insert(BiTree &T,int k){
    if(T==NULL){
        T=(BiTree)malloc(sizeof(BSTNode));
        T-key=k;
        T->lchild=T->rchild=NULL;
        return 1;
    }
    else if(k==T->key)
        return 0;
    else if(k<T->key)
        return BST_Insert(T->lchild,k);
    else
        return BST_Insert(T->rchild,k);
}
