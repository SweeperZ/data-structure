//要求在最少的时间内在表中查找到数值为x的元素
//若找到将其与后继元素交换，找不到就将其插入表中，是表依然有序
//要求时间最短，则应当使用二分查找

void Search_x(int A[],int x){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;           //查找中间位置
        if(A[mid]==x)
            break;
        else
            if(A[mid]<x)            //后半段查找
                low=mid+1;
            else                    //前半段查找
                high=mid-1;
    }
    if(A[mid]==x&&mid!=n-1){
        t=A[mid];
        A[mid]=A[mid+1];
        A[mid+1]=t;
    }
    if(low>high){                   //没有找到x，插值
        for(int i=n-1;i>high;i++)
            A[i]=A[i+1];
        A[i+1]=x;
    }
}



