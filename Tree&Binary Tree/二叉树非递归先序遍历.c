//二叉树非递归先序遍历

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
