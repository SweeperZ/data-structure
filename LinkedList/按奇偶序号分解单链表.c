//将带头结点的单链表A分解为两个带头结点的单链表AB
//A中含有原链表中的奇数序号元素
//B中含有原链表中的偶数序号元素


LinkList DisCreat(LinkList &A){
    int i=0;                                //i用来记录原链表的序号
    B=(LinkList)malloc(sizeof(LNode));      //创建B链表
    B->next=NULL;
    LNode *ra=A,*rb=B;
    LNode *p=A->next;                       //p指针来遍历原链表
    A->next=NULL;
    while(p){
        i++;
        if(i%2==0){                         //偶数结点，尾插法插入B
            rb->next=p;
            rb=p;
        }
        else{                               //奇数结点，尾插法插入A
            ra->next=p;
            ra=p;
        }
        p=p->next;
    }
    ra->next=NULL;
    rb->next=NULL;
    return B;
}
