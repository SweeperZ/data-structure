//����������ʽ�������洢������㷨
//�ж϶������Ƿ�����ȫ������


bool IsComplete(BiTree T){
    InitQueue(Q);
    if(!T)
        return 1;                   //��������ȫ������
    EnQueue(Q,T);
    while(!IsEmpty(Q)){
        DeQueue(Q,p);
        if(p){                      //���ǿգ����������������
            EnQueue(Q,p->lchild);
            EnQueue(Q,p->rchild);
        }
        else{                       //���Ϊ�գ��������Ƿ��зǿս��
            while(!IsEmpty(Q)){
                DeQueue(Q,p);
                if(p)               //���ǿգ���Ϊ��ȫ������
                    return 0;
            }
        }
    }
    return 1;
}
