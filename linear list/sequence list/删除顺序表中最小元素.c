//ɾ��L����ֵ��СԪ�أ���ͨ�������Ͳ���value������ֵ
//

bool DelMin(SqList &L,int &value){          //�����Ͳ�����������ֵ
    if(!L.length)                           //LΪ�գ�����FALSE
        return false;
    value=L.data[0];                        //��˳����һ��Ԫ�ؿ�ʼ��������Ϊ��Сֵ
    int p=0;                                //P���ڼ�¼��СֵԪ���±�
    for(int i=1;i<L.length;i++){            //����
        if(L.data[i]<value){                //���ҵ�����Сֵ����value
            value=L.data[i];
            p=i;                            //��СֵԪ���±�
        }
    }
    L.data[p]=L.data[L.length-1];           //���������һ��Ԫ��ֱ�Ӹ����ҵ�����СֵԪ��
    L.length--;                             //��ɾ������Сֵ����value�������ͣ��ڿɽ���ɾ�����ݷ��ظ�����
    return true;
}
