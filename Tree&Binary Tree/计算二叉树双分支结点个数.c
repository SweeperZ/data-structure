//���������˫��֧������

//�ݹ�
int DsonNodes(BiTree T){
    if(T==NULL)
        return 0;
    else
        if(T->lchild&&T->rchild)
            return DsonNodes(T->lchild)+DsonNodes(T->rchild)+1;//˫��֧���
    else
        return DsonNodes(T->lchild)+DsonNodes(T->rchild);//����֧����Ҷ�ӽ��

}
