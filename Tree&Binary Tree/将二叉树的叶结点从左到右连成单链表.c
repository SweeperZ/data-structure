//����������Ҷ�����������ɵ�����


LinkList head,pre=NULL;

LinkList InOreder(BiTree b){
    if(b){
        InOrder(b->lchild);                     //�����������
        if(b->lchild==NULL&&b->rchild==NULL)    //Ҷ���
            if(pre==NULL){                      //�����һ��Ҷ���
                head=b;
                pre=b;
            }
            else{                               //��Ҷ����������
                pre->rchild=b;
                pre=b;
            }
        InOrder(b->rchild);                     //�������������
        pre->rchild=NULL;                       //������β
    }
    return head;
}
