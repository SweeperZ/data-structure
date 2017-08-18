//二叉树非递归后序遍历

void PostOrder(BiTree T){
    InitStack(S);
    p=T;
    r=NULL;
    while(p||!IsEmpty(S)){
        if(p){
            Push(S,p);
            p=p->lchild;
        }
        else{
            GetTop(S,p);
            if(p-rchild&&p->rchild){
                p=p->rchild;
                Push(S,p);
                p=p->lchild;
            }
            else{
                Pop(S,p);
                visit(p->data);
                r=p;
                p=NULL;
            }
        }
    }
}
