//�������������н�������������


void swap(BiTree b){
    if(b){
        swap(b->lchild);        //�ݹ齻��������
        swap(b->rchild);        //�ݹ齻��������
        t=b->lchild;            //�������Һ��ӽ��
        b->lchild=b->rchild;
        b->rchild=t;
    }
}
