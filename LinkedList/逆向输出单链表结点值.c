//��ͷ���ĵ�����L
//��β��ͷ�������ÿ������ֵ

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
        R_Print(L->next);           //�ݹ飬����ݹ������⣬ÿ���������ܻ��һ��
    printf("\t%d\n",L->data);       //������һ�����ֵ
}                                   //����£���ͷ����

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
    printf("\n���ý��Ϊ��\n");

    R_Print(L);

    return 0;
}
