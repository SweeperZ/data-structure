//��k��¼���в�����x�ĸ������ڱ���L�Ĺ�����ͳ��k ��ֵ
//��������k��Ԫ�طŵ����ǰk��λ�ã�����޸ı�Ϊk

void Del_x(SqList &L,int x){
    int k;
    for(int i=0;i<L.length;i++){
        if(L.data[i]==x){
            L.data[k]=L.data[i];
            k++;
        }
    }
    L.length=k;
}
