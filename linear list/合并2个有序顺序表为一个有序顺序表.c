//��˳��Ƚ�������Ķ�ӦԪ�أ�С�Ĵ����±�
//Ȼ���Ǹ�����ʣ�࣬��ֱ�ӽӵ��±����

bool Merge(SqList A,SqList B,SqList &C){
    if(A.Legnth+B.Length>C.MaxSize)
        return false;
    int i=0,j=0,k=0;
    while(i<A.Length&&j<B.Length){
        if(A.data[i]<=B.data[j])
            C.data[k++]=A.data[i++];
        else
            C.data[k++]=B.data[j++];
    }
    while(i<A.Length)
        C.data[k++]=A.data[i++];
    while(j<B.Length)
        C.data[k++]=B.data[j++];
    C.Length=k;
    return true;
}


