//�������ǵݹ��������

void InOrder(BiTree T){
    InitStack(S);
    BiTree p=T;
    while(p||!IsEmpty(S)){
        if(p){
            Push(S,p);
            p=p->lchild;
        }
        else{
            Pop(S,p);
            visit(p);
            p=p->rchild;
        }
    }
}
