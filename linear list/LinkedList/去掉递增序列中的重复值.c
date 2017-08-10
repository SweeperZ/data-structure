//在一个递增有序的线性表中，有数值相同的元素存在
//若以单链表的方式存储设计算法去除重复值


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

void Delete_Same(LinkList L){
    LNode *p=L->next;               //p为工作指针
    LNode *q;
    if(!p)
        return ;
    while(p->next!=NULL){
        q=p->next;                  //q指向 p的后继
        if(p->data==q->data){
            p->next=q->next;
            free(q);
        }
        else
            p=p->next;
    }
    p=L->next;
    while(p){
        printf("\t %d\n",p->data);
        p=p->next;
    }
}

int main(void)
{
    LinkList L;
    int x,y;
    LNode *p,*q;
    L=Creat_R(L);
    p=L->next;
    while(p)
    {
        printf("\n p->data=%d\n ",p->data);
        p=p->next;
    }

    printf("\n 删除相同元素后的结果：\n");

    Delete_Same(L);

    return 0;
}
