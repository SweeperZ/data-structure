//ɾ������ΪֵΪxΪ���Ľ�������
//����Ҫ���ͷŽ���ڴ�


void Deletex(BiTree b){             //ɾ����bΪ��������
    if(b){
        Deletex(b->lchild);         //����������ɾ��
        Deletex(b->rchild);
        free(b);
    }
}

void Search(BiTree b,int x){
    BiTree Q[];                     //QΪ��Ŷ��������ָ��Ķ���
    if(b){
        if(b->data==x)
            Deletex(b);             //�����Ϊx��ɾ��������
        exit(0);
    }
    Init Queue(Q);
    EnQueue(Q,b);
    while(!IsEmpty(Q)){
        DeQueue(Q,p);
        if(p->lchild)                  //��
            if(p->lchild->data==x){
                Deletex(p->lchild);
                p->lchild=NULL;
            }
            else
                EnQueue(Q,p->lchild);
        if(p->rchild)                   //��
            if(p->rchild->data==x){
                Deletex(p->rchild);
                p->rchild=NULL;
            }
            else
                EnQueue(Q,p->rchild);
    }
}


