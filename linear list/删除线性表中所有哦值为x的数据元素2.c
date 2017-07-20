//用k记录表中不等于x的个数，在遍历L的过程中统计k 的值
//将不等于k的元素前移k个位置，最后修改表长为

void Del_x(SqList &L,int x){
    int k=0,i=0;
    while(i<L.length){
        if(L.data[i]==x)
            k++;
        else
            L.data[i-k]=L.data[i];      //当前元素前移k个位置
        i++;
    }
    L.length=L.length-k;
}
