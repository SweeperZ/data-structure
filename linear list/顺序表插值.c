//将a插入到L表中第i个位置
//插值成功返回TRUE

bool ListInsert(SqList &L,int i,int a)
{
    if(i<1||i>L.length+1)                   //表为空或者所传参数i比表长大
        return false;
    if(L.length>=MAXSIZE)
        return false;                       //表长大于设定
    for(int j=L.length;j>=i;j--)            //有的环境下不支持在for的括号里定义j
        L.data[j]=L.data[j-1];              //找到第i个位置，将它原来的元素及以后元素顺序后移1位
    L.data[i-1]=a;                          //i位置存入a
    L.length++;                             //表长+1
    return true;
}
