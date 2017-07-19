//将顺序表的所有元素逆置，要求空间复杂度为O(1)
//

void Reverse(SqList &L){
    int t;                                  //辅助变量
    for(int i=0;i<L.length/2;i++){          //将第一个和最后一个元素交换
        t=L.data[i];                        //前后同步，直至最中间的元素
        L.data[i]=L.data[L.length-i-1];     //中间元素为L.length/2
        L.data[L.length-i-1]=t;
    }
}
