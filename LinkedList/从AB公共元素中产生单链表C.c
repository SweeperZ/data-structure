//AB是两个带头结点的单链表，其中元素递增有序
//设计算法从AB公共元素中产生单链表C，要去不破坏AB结点


void Get_Common(LinkList A,LinkList B){
    LNode *p=La->next,*q=Lb->next,*r,*s;
    LinkList C=(LinkList)malloc(sizeof(LNode));     //建立链表C
    r=C;
    while(p&&q){
        if(p->data<q->data)
            p=p->next;
        else if(p->data>q->data)
            q=q->next;
        else{                                       //找到公共结点
            s=(LNode*)malloc(sizeof(LNode));        //复制结点
            s->data=p->data;
            r->next=s;                              //链接到C上
            r=s;
            p=p->next;                              //继续遍历寻找其他公共结点
            q=q->next;
        }
    }
    r->next=NULL;                                   //C尾结点指向NULL
}
