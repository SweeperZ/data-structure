//已知AB为单链表，元素递增排列
//求AB交集，存放在A中
//归并，分别用两个指针扫描两个链表
//只有同时出现在两个链表中的才是需要的元素
//其他元素释放，一个链表跑完后另一个全释放


LinkList Union(LinkList A,LinkList B){
    LNode *pa=A->next,*pb=B->next;
    LNode *Pc=A,*u;
    while(pa&&pb){
        if(pa->data==pb->data){
            pc->next=pa;
            pc=pa;
            pa=pa->next;
            u=pb;
            pb=pb->next;
            free(u);
        }
        else if(pa->data<pb->data){
            u=pa;
            pa=pa->next;
            free(u);
        }
        else{
            u=pb;
            pb=pb->next;
            free(u);
        }
    }
    while(pa){
        u=pa;
        pa=pa->next;
        free(u);
    }
    while(pb){
        u=pb;
        pb=pb->next;
        free(u);
    }
    pc->next=NULL;
    free(B);
    return A;
}
