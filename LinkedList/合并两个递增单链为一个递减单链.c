//������������Ԫ��ֵ�������еĵ�������д�㷨
//�������ϲ�Ϊһ����Ԫ��ֵ�ݼ����еĵ���
//��Ϊ�������ǵ����������ǵĵ�һ��Ԫ�ؿ�ʼ�Ƚϣ�
//��С�Ľ����뵽��������У���ͷ�巨��ʵ�ֵݼ�����

void Merge_List(LinkList La,LinkList Lb){
    LNode *r,*pa=La->next,*pb=Lb->next;
    La->next=NULL;
    while(pa&pb)                            //����������Ϊ��ʱѭ��
        if(pa->data<=pb->data){
            r=pa->next;
            pa->next=La->next;              //pa���뵽La
            La->next=pa;
            pa=r;
        }
        else{
            r=pb->next;
            pb->next=La->next;              //pb���뵽La
            La->next=pb;
            pb=r;
        }
        if(pa)                              //��ʣ�����Ԫ�ز���
            pb=pa;

        while(pa){
            r=pb->next;
            pb->next=La->next;
            La->next=pb;
            pb=r;
        }
    free(Lb);
}
