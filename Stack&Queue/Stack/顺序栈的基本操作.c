//��ʼ��
void InitStack(&S){
    S.top=-1;
}

//�ж�ջ��
bool StackEmpty(S){
    if(S.top==-1)
        return true;
    else
        return false;
}

//��ջ
bool Push(SqStack &S,int x){
    if(S.top==MaxSize-1)        //ջ��
        return false;
    S.data[++S.top]=x;          //ָ����+1�ڷ�����
    return true;
}

//��ջ
bool Pop(SqStack &S,int &x){
    if(S.top==-1)               //ջ��
        return false;
    x=S.data[S.top--];          //�ȳ�ջ��Ȼ��ָ��-1
    return true;
}

//��ȡջ��Ԫ��
bool GetTop(SqStack &S,int &x){
    if(S.top==-1)               //ջ��
        return false;
    x=S.data[S.top];          //��ȡ
    return true;
}


