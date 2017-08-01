//就地逆置即要求辅助空间复杂度为O(1)
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

LinkList Reverse_2(LinkList L){         //pre,p,r指向3个相邻的结点
    LNode *pre,*p=L->next,*r=p->next;   //
    p->next=NULL;                       //
    while(r){
        pre=p;
        p=r;
        r=r->next;
        p->next=pre;                    //指针反转
    }
    L->next=p;                          //处理最后一个结点
    return L;
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
    printf("\n就地逆置后的结果：\n");

    q=Reverse_2(L);
    q=q->next;
    while(q){
        printf("\t%d\n",q->data);
        q=q->next;
    }
    return 0;
}
