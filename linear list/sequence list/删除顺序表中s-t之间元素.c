//ɾ��˳�����s��t��Ԫ�أ�����s��t
//��ǰ������L����k��¼s��t֮��Ԫ�صĸ��������ڵ�ǰԪ�أ�ֵ����st֮��
//��ǰ��k��λ�ã�����k++����ˣ�ÿ����ɾ����Ԫ�ض�ֻ�ƶ�һ�Ρ�

bool Delst(SqList &L,int s,int t){
    int i,k=0;
    if(S>t||L.length==0)
        return false;
    for(i=0;i<L.length;i++){
        if(L.data[i]>=s&&L.data<=t)
            k++;
        else
            L.data[i-k]=L.data[i];      //��ǰ����Ҫɾ����Ԫ��ǰ��k��λ��
    }
    L.length-=k;
    return true;
}
