//����tag��ѭ���������
int EnQueue(SqQueue &Q,int x){
    if(Q.front==Q.rear&&Q.tag==1)
        return 0;                   //����
    Q.data[Q.rear]=x;
    Q.rear=(Q.rear+1)%MaxSize;
    Q.tag=1;
    return 1;
}

//����tag��ѭ�����г���
int DeQueue(SqQueue &Q,int &x){
    if(Q.front==Q.rear&&Q.tag==0)
        return 0;                   //�ӿ�
    x=Q.data[Q.front];
    Q.front=(Q.front+1)%MaxSize;
    Q.tag=0;
    return 1;
}


