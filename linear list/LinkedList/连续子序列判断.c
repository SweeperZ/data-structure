//��֪��������A=a1,a2,a3...am,B=b1,b2,b3...bn
//���������������У�����㷨�ж�����B�Ƿ���A��
//����������
//����������ĵ�һ����㿪ʼ��������������ȣ������ָ��
//�����ȣ����A����һ���ȽϽ��ĺ�̽�㿪ʼ���º�B�Ƚ�
//ֱ����B��������һ�����Ƚ��꣬
//A��β��Bδ������û���ҵ�����������

int Pattern(LinkList A,LinkList B){
    LNode *p=A,*pre=p,*q=B;
    while(p&&q){
        if(p->data==q->data){
            p=p->next;
            q=q->next;
        }
        else{
            pre=pre->next;
            p=pre;
            q=B;
        }
    }
    if(q==NULL)
        return 1;
    else
        return;
}
