//��������ÿ�ζ��ڱ�ͷ�ĺ��λ�ò����½��
//

LinkList Creat_H(LinkList &L){
    LNode *s;
    int x;
    L=(LinkList)malloc(sizeod(LNode));
    L->next=NULL;
    scanf("%d",x);
    while(x!=9999){
        s=(LNode *)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
    }
    return L;
}
