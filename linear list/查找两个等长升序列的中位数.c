//分别求两个序列的中位数ab，如果a==b则a或者b为两个序列的中位数
//a<b则舍弃A序列的前一半和B的后一半
//a>b则舍弃A的后一半和B的前一半

int Search_mid(int A[],int B[],int n){
    int s1=0,d1=n-1,m1,s2=0,d2=n-1,m2;
    while(s1!=d1||s2!=d2){
        m1=(s1+d1)/2;
        m2=(s2+d2)/2;
        if(A[m1]==B[m2])
            return A[m1];
        if(A[m1]<B[m2]){
            if((s1+d1)%2==0){               //元素个数为奇数
                s1=m1;                      //舍弃A的前半段,留下中间点
                d2=m2;                      //舍弃B的后半段,留下中间点
            }
            else{                           //偶数
                s1=m1+1;                    //舍弃A的前半段,不留中间点
                d2=m2;                      //舍弃B的后半段,不留中间点
            }
        }
        else{                               //与上相反
            if((s2+d2)%2==0){
                d1=m1;
                s2=m2;
            }
            else{
                d1=m1;
                s2=m2+1;
            }
        }
    }
    return A[s1]<B[s2]? A[s1] : B[s2];
}
