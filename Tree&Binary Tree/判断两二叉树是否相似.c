//���ƣ�T1��T2���ǿյĶ��������߶�ֻ��һ������㣬
//����T1����������T2�������������Ƶ���T1����������
//T2�������������Ƶġ�


//�ݹ�

int similar(BiTree T1,BiTree T2){
    int leftS,rightS;
    if(!T1&&!T2)
        return 1;                               //T1��T2��Ϊ��
    else if(!T1||!T2)
        return 0;                               //ֻ��һ����Ϊ��
    else{
        leftS=similar(T1->lchild,T2->lchild);   //�ݹ�
        rigthS=similar(T1->rchild,T2->rchild);
        return leftS&&rightS;
    }
}
