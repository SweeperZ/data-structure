//带头结点的单链表L
//从尾到头反向输出每个结点的值

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

void R_Print(LinkList L){           //
    if(L->next)
        R_Print(L->next);           //递归，这个递归有问题，每次输出结果总会多一行
    printf("\t%d\n",L->data);       //内容是一个随机值
}                                   //标记下，回头来改

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
    printf("\n逆置结果为：\n");

    R_Print(L);

    return 0;
}
