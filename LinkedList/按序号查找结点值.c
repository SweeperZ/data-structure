//从单链表的第一个结点出发，逐个往后搜索，直到第i个为止
//否则返回最后一个指针域NULL

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


LNode *GetElem(LinkList L,int i){
    int j=1;
    LNode *p=L->next;
    if(i==0)
        return L;
    if(i<1)
        return NULL;
    while(p&&j<i){
        p=p->next;
        j++;
    }
    return p;
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
    printf("输入要查找的结点序号：\n");
    scanf("%d",&x);
    q=GetElem(L,x);
    if(!q)
        printf("NULL\n");
    else
        printf("\n%d",q->data);
}


