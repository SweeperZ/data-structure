//�����������Ĺ���

void Creat_BST(BiTree &T,int str[],int n){
    T=NULL;                         //��ʼʱΪ����
    int i=0;
    while(i<n){                     //���ν�ÿ��Ԫ�ز���
        BST_Insert(T,str[i]);
        i++;
    }
}
