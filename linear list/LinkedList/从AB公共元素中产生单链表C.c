//AB��������ͷ���ĵ���������Ԫ�ص�������
//����㷨��AB����Ԫ���в���������C��Ҫȥ���ƻ�AB���


void Get_Common(LinkList A,LinkList B){
    LNode *p=La->next,*q=Lb->next,*r,*s;
    LinkList C=(LinkList)malloc(sizeof(LNode));     //��������C
    r=C;
    while(p&&q){
        if(p->data<q->data)
            p=p->next;
        else if(p->data>q->data)
            q=q->next;
        else{                                       //�ҵ��������
            s=(LNode*)malloc(sizeof(LNode));        //���ƽ��
            s->data=p->data;
            r->next=s;                              //���ӵ�C��
            r=s;
            p=p->next;                              //��������Ѱ�������������
            q=q->next;
        }
    }
    r->next=NULL;                                   //Cβ���ָ��NULL
}
