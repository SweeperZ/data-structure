//设计一个算法使单链表中的元素递增有序
//


#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

LinkList Creat_R(LinkList L){
    int x;
    L=(LinkList)malloc(sizeof(LNode));
    LNode *s,*r=L;
    scanf("%d",&x);
    while(x!=9999){
        s=(LNode *)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    }
    r->next=NULL;
    return L;
}

void Sort(LinkList L){
    LNode *p=L->next,*pre;
    LNode *r=p->next;
    p->next=NULL;               //此时L中只有表头结点和第一个数据结点
    p=r;
    while(p){
        r=p->next;
        pre=L;
        while(pre->next&&pre->next->data<p->data)
            pre=pre->next;             //在有序表中查找插入*p的前驱pre
        p->next=pre->next;             //插入p 到pre后
        pre->next=p;
        p=r;
    }
    p=L->next;
    while(p){
        printf("\t%d\n",p->data);
        p=p->next;
    }
}

int main(void)
{
    LinkList L;int x;
    LNode *p,*q;
    L=Creat_R(L);
    p=L->next;
    while(p)
    {
        printf("\n p->data=%d\n ",p->data);
        p=p->next;
    }
    printf("\n排序后的结果：\n");

    Sort(L);

    return 0;
}
