//����ͷ���ĵ�����A�ֽ�Ϊ������ͷ���ĵ�����AB
//A�к���ԭ�����е��������Ԫ��
//B�к���ԭ�����е�ż�����Ԫ��


LinkList DisCreat(LinkList &A){
    int i=0;                                //i������¼ԭ��������
    B=(LinkList)malloc(sizeof(LNode));      //����B����
    B->next=NULL;
    LNode *ra=A,*rb=B;
    LNode *p=A->next;                       //pָ��������ԭ����
    A->next=NULL;
    while(p){
        i++;
        if(i%2==0){                         //ż����㣬β�巨����B
            rb->next=p;
            rb=p;
        }
        else{                               //������㣬β�巨����A
            ra->next=p;
            ra=p;
        }
        p=p->next;
    }
    ra->next=NULL;
    rb->next=NULL;
    return B;
}
