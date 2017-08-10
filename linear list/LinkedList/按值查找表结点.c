//查找给定的值x，若没有找到，返回NULL
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

LNode *LocateElem(LinkList L,int x){
    LNode *p=L->next;
    while(p!=NULL&&p->data!=x)
        p=p->next;
    return p;
}

int main(void)
{
    LinkList L;
    int x;
    LNode *p,*q;
    L=Creat_R(L);
    p=L->next;
    while(p)
    {
        printf("\n p->data=%d\n ",p->data);
        p=p->next;
    }
    printf("输入要查找的值x：\n");
    scanf("%d",&x);
    q=LocateElem(L,x);
    if(!q)
        printf("NULL\n");
    else
        printf("\n%d",q->data);
}
