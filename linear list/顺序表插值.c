//��a���뵽L���е�i��λ��
//��ֵ�ɹ�����TRUE

bool ListInsert(SqList &L,int i,int a)
{
    if(i<1||i>L.length+1)                   //��Ϊ�ջ�����������i�ȱ���
        return false;
    if(L.length>=MAXSIZE)
        return false;                       //�������趨
    for(int j=L.length;j>=i;j--)            //�еĻ����²�֧����for�������ﶨ��j
        L.data[j]=L.data[j-1];              //�ҵ���i��λ�ã�����ԭ����Ԫ�ؼ��Ժ�Ԫ��˳�����1λ
    L.data[i-1]=a;                          //iλ�ô���a
    L.length++;                             //��+1
    return true;
}
