//���Ժ����ֵܷ��洢��ɭ�ֵ�Ҷ�ӽ����


typedef struct node{
    int data;
    struct node *fch,*nsib;         //�������ֵ���
}*Tree;

int Leaves(Tree t){
    if(!t)
        return 0;
    if(t->fch==NULL)                //������޺������ΪҶ��
        return 1+Leaves(t->nsib);   //����Ҷ�ӽ�㼰���ֵ������е�Ҷ����
    else
        return Leaves(t->fch)+Leaves(t->nsib);  //�����������ֵ������е�Ҷ�ӽ����֮��
}
