//用k记录表中不等于x的个数，在遍历L的过程中统计k 的值
//将不等于k的元素放到表的前k个位置，最后修改表长为k

void Del_x(SqList &L,int x){
    int k;
    for(int i=0;i<L.length;i++){
        if(L.data[i]==x){
            L.data[k]=L.data[i];
            k++;
        }
    }
    L.length=k;
}
