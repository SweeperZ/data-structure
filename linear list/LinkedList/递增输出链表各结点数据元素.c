//���������������������������Ԫ��
//���ͷŽ����ռ���ڴ�ռ�
//��������б�����ÿ���ҳ���С�Ľ��ֵ��������ͷ����ڴ�
//ֱ������Ϊ�գ��ͷ�ͷ�����ڴ�ռ�

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

void Print_Delete(LinkList L){
    LNode *p,*pre;
    LNode *u;
    while(L->next){
        pre=L;
        p=pre->next;
        while(p->next){
            if(p->next->data<pre->next->data)
                pre=p;
            p=p->next;
        }
        printf("\t%d\n",pre->next->data);
        u=pre->next;
        pre->next=u->next;
        free(u);
    }
    free(L);
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

    printf("\n ��������������Ľ����\n");

    Print_Delete(L);

    return 0;
}
