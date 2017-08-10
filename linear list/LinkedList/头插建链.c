//逆向建链，每次都在表头的后继位置插入新结点
//

LinkList Create_H(LinkList &L){
    LNode *s;
    int x;
    L=(LinkList)malloc(sizeod(LNode));
    L->next=NULL;
    scanf("%d",&x);
    while(x!=9999){
        s=(LNode *)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);
    }
    return L;
}
