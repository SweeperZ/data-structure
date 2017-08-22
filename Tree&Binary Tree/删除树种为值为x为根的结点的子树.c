//删除树种为值为x为根的结点的子树
//并且要求释放结点内存


void Deletex(BiTree b){             //删除以b为根的子树
    if(b){
        Deletex(b->lchild);         //左右子树的删除
        Deletex(b->rchild);
        free(b);
    }
}

void Search(BiTree b,int x){
    BiTree Q[];                     //Q为存放二叉树结点指针的队列
    if(b){
        if(b->data==x)
            Deletex(b);             //根结点为x则删除整个树
        exit(0);
    }
    Init Queue(Q);
    EnQueue(Q,b);
    while(!IsEmpty(Q)){
        DeQueue(Q,p);
        if(p->lchild)                  //左
            if(p->lchild->data==x){
                Deletex(p->lchild);
                p->lchild=NULL;
            }
            else
                EnQueue(Q,p->lchild);
        if(p->rchild)                   //右
            if(p->rchild->data==x){
                Deletex(p->rchild);
                p->rchild=NULL;
            }
            else
                EnQueue(Q,p->rchild);
    }
}


