BSTNode *BST_Search(BiTree T,int key,BSTNode *&p){
    p=NULL;                             //pָ�򱻲��ҵĽ���˫�ף����ڲ����ɾ��
    while(T!=NULL&&T->data){
        p=T;
        if(key<T->data)
            T=T->lchild;
        else
            T=T->rchild;
    }
    return T;
}
