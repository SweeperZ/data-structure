//假设有两个按元素值递增排列的单链表，编写算法
//将他俩合并为一个按元素值递减排列的单链
//因为两个表都是递增，从他们的第一个元素开始比较，
//将小的结点放入到结果链表中，用头插法来实现递减序列

void Merge_List(LinkList La,LinkList Lb){
    LNode *r,*pa=La->next,*pb=Lb->next;
    La->next=NULL;
    while(pa&pb)                            //当两个表都不为空时循环
        if(pa->data<=pb->data){
            r=pa->next;
            pa->next=La->next;              //pa插入到La
            La->next=pa;
            pa=r;
        }
        else{
            r=pb->next;
            pb->next=La->next;              //pb插入到La
            La->next=pb;
            pb=r;
        }
        if(pa)                              //将剩余的链元素插入
            pb=pa;

        while(pa){
            r=pb->next;
            pb->next=La->next;
            La->next=pb;
            pb=r;
        }
    free(Lb);
}
