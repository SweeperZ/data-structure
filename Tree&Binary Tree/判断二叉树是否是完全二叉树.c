//二叉树按链式二叉树存储，设计算法
//判断二叉树是否是完全二叉树


bool IsComplete(BiTree T){
    InitQueue(Q);
    if(!T)
        return 1;                   //空树是完全二叉树
    EnQueue(Q,T);
    while(!IsEmpty(Q)){
        DeQueue(Q,p);
        if(p){                      //结点非空，将其左右子树入队
            EnQueue(Q,p->lchild);
            EnQueue(Q,p->rchild);
        }
        else{                       //结点为空，检查其后是否有非空结点
            while(!IsEmpty(Q)){
                DeQueue(Q,p);
                if(p)               //结点非空，则为完全二叉树
                    return 0;
            }
        }
    }
    return 1;
}
