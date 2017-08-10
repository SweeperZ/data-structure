//在顺序表中查找特定值
//找到返回其位置，否则返回0

int FindElem(SqList &L,int a){
    int i;
    for(i=0;i<L.length;i++)
        if(L.data[i]==a)
            return i+1;
    return 0;
}
