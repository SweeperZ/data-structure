//���赫������ֻ����ͷָ�룬�ڲ��ı������ǰ����
//���������е�����k��λ���ϵĽ��


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
    LNode *p=L->next,*q=L->next;        //pq��ʼ��ָ���һ�����
    int count=0;                        //count����
    while(p){                           //��p�ܵ���K��λ�ã�q��ʼ��
        if(count<k)
            count++;
        else
            q=q->next;                  //pָ�����һ�����ʱ��qָ������k��
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

    printf("\n ����Ҫ���ҵ�����k����㣺\n");
    scanf("%d",&k);

    m=Search_k(L,k);

    return 0;
}
