//��֪ABΪ������Ԫ�ص�������
//��AB�����������A��
//�鲢���ֱ�������ָ��ɨ����������
//ֻ��ͬʱ���������������еĲ�����Ҫ��Ԫ��
//����Ԫ���ͷţ�һ�������������һ��ȫ�ͷ�


LinkList Union(LinkList A,LinkList B){
    LNode *pa=A->next,*pb=B->next;
    LNode *Pc=A,*u;
    while(pa&&pb){
        if(pa->data==pb->data){
            pc->next=pa;
            pc=pa;
            pa=pa->next;
            u=pb;
            pb=pb->next;
            free(u);
        }
        else if(pa->data<pb->data){
            u=pa;
            pa=pa->next;
            free(u);
        }
        else{
            u=pb;
            pb=pb->next;
            free(u);
        }
    }
    while(pa){
        u=pa;
        pa=pa->next;
        free(u);
    }
    while(pb){
        u=pb;
        pb=pb->next;
        free(u);
    }
    pc->next=NULL;
    free(B);
    return A;
}
