//表中的结点无序
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

void Delet_xtoy(LinkList L,int x,int y){
    LNode *pr=L,*p=L->next;
    while(p){
        if(p->data>x&&p->data<y){
            pr->next=p->next;
            free(p);
            p=pr->next;
        }
        else{
            pr=p;
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
    printf("\n请输入要删除的范围 x： y：\n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("\n 删除%d-%d后的结果：\n",x,y);
    Delet_xtoy(L,x,y);

    return 0;
}
