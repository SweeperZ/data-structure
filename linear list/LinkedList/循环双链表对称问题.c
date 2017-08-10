//设计一个算法用于判断带头结点的循环
//双链表是否对称


int Symmetry(DLinkList L){
    DNode *p=L->next,*q=L->prior;
    while(p!=q&&q->next!=p){
        if(p->data==q->data){
            p=p->next;
            q=q->prior;
        }
        else
            return 0;
        return 1;
    }
}
