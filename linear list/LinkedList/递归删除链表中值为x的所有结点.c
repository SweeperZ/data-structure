void Del_x(LinkList L,int x){
    LNode *p;                   //p指向待删除结点
    if(L==NULL)                 //递归出口
        return ;
    if(L->data==x){             //若L所指的结点的值为x
        p=L;                    //删除*L，并让L指向下一个结点。
        p=L->next;
        free(p);
        Del_x(L,x);             //递归调用
    }
    else                        //若L所指的结点值不为x
        Del_x(L->next,x);       //递归调用
}
