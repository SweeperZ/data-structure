//���һ���㷨�����жϴ�ͷ����ѭ��
//˫�����Ƿ�Գ�


int Symmetry(DLinkList L){
    DNode *p=L->next,*q=L->prior;
    while(p!=q&&q->next!=p){
        if(p->data==q->data){
            p=p->next;
            q=q->prior;
        }
        else
            return 0;
        return 1;
    }
}
