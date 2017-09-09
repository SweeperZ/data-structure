//·ÇµÝ¹é

int Btdepth(BiTree T){
    if(!T)
        return 0;
    int front=-1,rear=-1;
    int last=0,level=0;
    BiTree Q[MaxSize];
    Q[++rear]=T;
    BiTree p;
    while(front<rear){
        p=Q[++front];
        if(p->lchild)
            Q[++rear]=p->lchild;
        if(p->rchild)
            Q[++rear]=p->rchild;
        if(front==rear){
            level++;
            last=rear;
        }
    }
    return level;
}


//µÝ¹é

int Btdepth(BiTree T){
    
    if(T==NULL)
        return 0;

    ldep=Btdepth(T->lchild);
    rdep=Btdepth(T->rchild);
    
    if(ldep>rdep)
        return ldep+1;
    else  
        return rdep+1;
}
