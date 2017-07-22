//有序顺序表，相同值位置相连
//

bool Delete_Same(SqList &L){
    if(L.length==0)
        return false;
    int i,j;                            //i记录个相同元素的第一个，j 去跑后面的相同元素
    for(i=0,j=i;i<L.length;j++)         //
        if(L.data[i]!=L.data[j])        //查找下一个不同元素
            L.data[++i]=L.data[j];      //将找到的不同元素前移
    L.length=i+1;
}
