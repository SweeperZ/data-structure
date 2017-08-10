//假设但单链表只给了头指针，在不改变链表的前提下
//查找链表中倒数第k个位置上的结点


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

int Search_k(LinkList L,int k){
    LNode *p=L->next,*q=L->next;        //pq开始都指向第一个结点
    int count=0;                        //count计数
    while(p){                           //当p跑到第K个位置，q开始跑
        if(count<k)
            count++;
        else
            q=q->next;                  //p指向最后一个结点时，q指向倒数第k个
        p=p->next;
    }
    if(count<k)
        return 0;
    else{
        printf("\t%d\n",q->data);
        return 1;
    }
}

int main(void)
{
    LinkList L;
    int k,m;
    LNode *p,*q;
    L=Creat_R(L);
    p=L->next;
    while(p)
    {
        printf("\n p->data=%d\n ",p->data);
        p=p->next;
    }

    printf("\n 输入要查找倒数第k个结点：\n");
    scanf("%d",&k);

    m=Search_k(L,k);

    return 0;
}
