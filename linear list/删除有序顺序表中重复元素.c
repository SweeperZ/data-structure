//����˳�����ֵͬλ������
//

bool Delete_Same(SqList &L){
    if(L.length==0)
        return false;
    int i,j;                            //i��¼����ͬԪ�صĵ�һ����j ȥ�ܺ������ͬԪ��
    for(i=0,j=i;i<L.length;j++)         //
        if(L.data[i]!=L.data[j])        //������һ����ͬԪ��
            L.data[++i]=L.data[j];      //���ҵ��Ĳ�ͬԪ��ǰ��
    L.length=i+1;
}
