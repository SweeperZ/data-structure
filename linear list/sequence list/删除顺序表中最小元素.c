//删除L中数值最小元素，并通过引用型参数value返回其值
//

bool DelMin(SqList &L,int &value){          //引用型参数，返回其值
    if(!L.length)                           //L为空，返回FALSE
        return false;
    value=L.data[0];                        //从顺序表第一个元素开始，假设其为最小值
    int p=0;                                //P用于记录最小值元素下标
    for(int i=1;i<L.length;i++){            //遍历
        if(L.data[i]<value){                //将找到的最小值赋给value
            value=L.data[i];
            p=i;                            //最小值元素下标
        }
    }
    L.data[p]=L.data[L.length-1];           //将表中最后一个元素直接赋给找到的最小值元素
    L.length--;                             //即删除了最小值，而value是引用型，在可将被删除数据返回给主调
    return true;
}
