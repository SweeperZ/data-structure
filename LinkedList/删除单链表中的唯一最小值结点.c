//带头结点的单链表L中删除一个最小值（唯一）
//要求算法高效


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

LinkList Delete_Min(LinkList L){            //当前工作指针及最小值暂存指针都有配套的
    LNode *pre=L,*p=pre->next;              //指针来保存其前驱，便于删除操作
    LNode *minpre=pre,*minp=p;
    while(p){
        if(p->data<minp->data){
            minp=p;
            minpre=pre;
        }
        pre=p;
        p=p->next;
    }
    minpre->next=minp->next;
    free(minp);
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
    printf("\n删除最小值结点后的结果：\n");

    q=Delete_Min(L);
    q=q->next;
    while(q!=NULL){
        printf("\t%d\n",q->data);
        q=q->next;
    }
    return 0;
}
