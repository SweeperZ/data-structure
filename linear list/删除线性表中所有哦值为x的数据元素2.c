//��k��¼���в�����x�ĸ������ڱ���L�Ĺ�����ͳ��k ��ֵ
//��������k��Ԫ��ǰ��k��λ�ã�����޸ı�Ϊ

void Del_x(SqList &L,int x){
    int k=0,i=0;
    while(i<L.length){
        if(L.data[i]==x)
            k++;
        else
            L.data[i-k]=L.data[i];      //��ǰԪ��ǰ��k��λ��
        i++;
    }
    L.length=L.length-k;
}
