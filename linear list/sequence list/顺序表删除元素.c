//删除顺序表第i个元素
//与插值相反的操作

bool ListDelete(SqList &L,int i,int &a){
    if(i<1||i>L.length)
        return false;
    a=L.data[i-1];
    for(int j=i;j<L.length;j++)
        L.data[j-1]=L.data[j];
    L.length--;
    return true;
}
