//在带表头的单链表L中，删除所有值为x的结点并释放其内存空间
//假设值为x的结点不唯一

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

void Del_x_2(LinkList L,int x){       //采用尾插法建立链表
    LNode *p=L->next,*r=L,*q;         //p扫描L，值不为x的结点尾插到L
    while(p){
        if(p->data!=x){
            r->next=p;
            r=p;
            p=p->next;
        }
        else{
            q=p;
            p=p->next;
            free(q);
        }
    }
    r->next=NULL;
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
    printf("输入要删除的结点值x：\n");
    scanf("%d",&x);
    Del_x_2(L,x);

    return 0;
}
