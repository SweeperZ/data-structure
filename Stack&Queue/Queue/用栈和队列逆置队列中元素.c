//Q��һ�����У�S��һ��ջ��ʵ�ֽ������е�Ԫ������
//


void Inverser(Stack S,Queue Q){
    while(!QueueEmpty(Q)){
        x=DeQueue(Q);               //������Ԫ�����γ���
        Push(S,x);                  //Ԫ��������ջ
    }
    while(!StackEmpty(S)){
        Pop(S,x);                   //ջ��Ԫ�����γ�ջ
        EnQueue(Q,x);               //��Ӻ󣬶����е�Ԫ�ؼ������ú�Ľ��
    }
}
