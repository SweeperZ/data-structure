//���������ö�������洢������㷨
//��������������е�k������ֵ


int i;                      //��ʾ������ŵ�ȫ�ֱ���
int PreNode(BiTree b,int k){
    if(b==NULL)             //�ս��
        return '#';
    if(i==k)                //��ǰ���Ϊ��k�����
        return b->data;
    i++;                    //��һ�����
    ch=PreNode(b->lchild,k);//�������еݹ����
    if(ch!='#')
        return ch;
    ch=PreNode(b->rchild,k);//�������еݹ����
        return ch;
}
