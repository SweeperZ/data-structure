//设有一带头结点的循环单链表，设计算法反复找出单链表
//结点最小值并输出，然后将该结点删除，直到单链表为空
//最后删除头结点


void Del(LinkList L){
    LNode *p,*minp,*pre,*minpre;
    while(L->next){
        p=L-next;
        pre=L;
        minp=p;
        minpre=pre;
        while(p!=L){
            if(p->data<minp->data){
                minp=p;
                p=p->next;
            }
            pre=p;
            p=p->next;
        }
        printf("%d",minp->data);
        minpre->next=minp->next;
        free(minp);
    }
    free(L);
}
