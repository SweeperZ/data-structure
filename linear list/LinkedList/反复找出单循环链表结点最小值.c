//����һ��ͷ����ѭ������������㷨�����ҳ�������
//�����Сֵ�������Ȼ�󽫸ý��ɾ����ֱ��������Ϊ��
//���ɾ��ͷ���


void Del(LinkList L){
    LNode *p,*minp,*pre,*minpre;
    while(L->next){
        p=L-next;
        pre=L;
        minp=p;
        minpre=pre;
        while(p!=L){
            if(p->data<minp->data){
                minp=p;
                p=p->next;
            }
            pre=p;
            p=p->next;
        }
        printf("%d",minp->data);
        minpre->next=minp->next;
        free(minp);
    }
    free(L);
}
