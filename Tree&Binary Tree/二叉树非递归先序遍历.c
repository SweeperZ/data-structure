//�������ǵݹ��������

void PreOrder(BiTree T){
    InitStack(S);
    BiTree p=T;
    while(p||!IsEmpty(S)){
        if(p){
            Push(S,p);
            p=p->rchild;
        }
        else{
            Pop(S,p);
            visit(p);
            p=p->lchild;
        }
    }
}
