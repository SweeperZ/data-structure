//¶þ²æÊ÷°´²ã±éÀú

void LevelOrder(BiTree T){
    InitQueue(Q);
    BiTree(T);
    EnQueue(Q,T);
   
    while(!IsEmpty(Q)){
        DeQueue(Q,p);
        visit(p);
    
        if(p->lchild!=NULL)
            EnQueue(Q,p->lchild);
        
        if(p->rchild!=NULL)
            EnQueue(Q,p->rchild);
    }
}
