//��ʼ��
void InitQueue(LinkQueue &Q){
    Q.front=Q.rear=(LinkNode *)malloc(sizeof(LinkNode));
    Q.front->next=NULL;
}

//�жӿ�
bool IsEmpty(LinkQueue Q){
    if(Q.front==Q.rear)
        return true;
    else
        return false;
}

//���
void EnQueue(LinkQueue &Q,int x){
    s=(LinkNode *)malloc(sizeof(LinkNode));
    s->data=x;
    s->next=NULL;
    Q.rear=s;
}

//����
void DeQueue(LinkQueue &Q,int &x){
    if(Q.front==Q.rear)
        return false;
    p=Q.front->next;
    x=p->data;
    Q.front->next=p->next;
    if(Q.rear==p)
        Q.rear==Q.front;
    free(p);
    return true;
}
