//����ֵ>=s�ĵ�һ��Ԫ�أ�Ȼ����>t�ĵ�һ��Ԫ�أ�
//�������Ԫ�ظ��ǵ�������䣬Ȼ��ı����鳤�ȼ��������Ҫ��ɾ������

bool Del_stot(SqList &L,int s,int t){
    int i,j;
    if(s>t||L.length<==0)
        return false;
    for(i=0;i<L.length&&L.data[i]<s;i++) ;      //����>=s�ĵ�һ��Ԫ��
    if(i>L.length)
        return false;                           //û�ҵ�>s ��Ԫ��
    for(j=i;j<L.length&&L.data[j]<=t;j++);      //����>t�ĵ�һ��Ԫ��
    for( ; j<L.length;i++,j++){                 //����Ԫ�ظ��ǵ�Ҫɾ��������
        L.data[i]=L.data[j];
        L.length=i;
    }
    return true;
}
