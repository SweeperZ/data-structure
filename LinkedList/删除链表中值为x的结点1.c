//�ڴ���ͷ�ĵ�����L�У�ɾ������ֵΪx�Ľ�㲢�ͷ����ڴ�ռ�
//����ֵΪx�Ľ�㲻Ψһ

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

void Del_x_1(LinkList L,int x){       //��ǰ����������ҵ�һ��ɾ��һ��
    LNode *p=L->next,*pre,*q;
    while(p){
        if(p->data==x){
            q=p;
            p=p->next;
            pre->next=p;
            free(q);
        }
        else{
            pre=p;
            p=p->next;
        }
    }
    p=L->next;
    while(p){
        printf("\t%d\n",p->data);
        p=p->next;
    }
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
    printf("����Ҫɾ���Ľ��ֵx��\n");
    scanf("%d",&x);
    Del_x_1(L,x);

    return 0;
}
