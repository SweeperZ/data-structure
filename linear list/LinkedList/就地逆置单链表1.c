//�͵����ü�Ҫ�����ռ临�Ӷ�ΪO(1)
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

LinkList Reverse_1(LinkList L){       //����������ǽ������ڱ����Ĺ�����
    LNode *p,*r;                      //��ͷ�巨������������
    p=L->next;
    L->next=NULL;
    while(p){
        r=p->next;
        p->next=L->next;
        L->next=p;
        p=r;
    }
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
    printf("\n�͵����ú�Ľ����\n");

    q=Reverse_1(L);
    q=q->next;
    while(q){
        printf("\t%d\n",q->data);
        q=q->next;
    }
    return 0;
}
