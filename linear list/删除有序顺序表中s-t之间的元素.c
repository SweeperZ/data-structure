//先找值>=s的第一个元素，然后找>t的第一个元素，
//将后面的元素覆盖到这个区间，然后改变数组长度即可完成所要求删除操作

bool Del_stot(SqList &L,int s,int t){
    int i,j;
    if(s>t||L.length<==0)
        return false;
    for(i=0;i<L.length&&L.data[i]<s;i++) ;      //查找>=s的第一个元素
    if(i>L.length)
        return false;                           //没找到>s 的元素
    for(j=i;j<L.length&&L.data[j]<=t;j++);      //查找>t的第一个元素
    for( ; j<L.length;i++,j++){                 //后面元素覆盖到要删除的区间
        L.data[i]=L.data[j];
        L.length=i;
    }
    return true;
}
