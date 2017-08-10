//删除顺序表中s到t的元素，包括s和t
//从前向后遍历L，用k记录s到t之间元素的个数，对于当前元素，值不在st之间
//则前移k个位置，否则k++，如此，每个不删除的元素都只移动一次。

bool Delst(SqList &L,int s,int t){
    int i,k=0;
    if(S>t||L.length==0)
        return false;
    for(i=0;i<L.length;i++){
        if(L.data[i]>=s&&L.data<=t)
            k++;
        else
            L.data[i-k]=L.data[i];      //当前不需要删除的元素前移k个位置
    }
    L.length-=k;
    return true;
}
