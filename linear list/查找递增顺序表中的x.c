//Ҫ�������ٵ�ʱ�����ڱ��в��ҵ���ֵΪx��Ԫ��
//���ҵ���������Ԫ�ؽ������Ҳ����ͽ��������У��Ǳ���Ȼ����
//Ҫ��ʱ����̣���Ӧ��ʹ�ö��ֲ���

void Search_x(int A[],int x){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;           //�����м�λ��
        if(A[mid]==x)
            break;
        else
            if(A[mid]<x)            //���β���
                low=mid+1;
            else                    //ǰ��β���
                high=mid-1;
    }
    if(A[mid]==x&&mid!=n-1){
        t=A[mid];
        A[mid]=A[mid+1];
        A[mid+1]=t;
    }
    if(low>high){                   //û���ҵ�x����ֵ
        for(int i=n-1;i>high;i++)
            A[i]=A[i+1];
        A[i+1]=x;
    }
}



