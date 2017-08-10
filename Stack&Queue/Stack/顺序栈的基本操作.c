//初始化
void InitStack(&S){
    S.top=-1;
}

//判断栈空
bool StackEmpty(S){
    if(S.top==-1)
        return true;
    else
        return false;
}

//进栈
bool Push(SqStack &S,int x){
    if(S.top==MaxSize-1)        //栈满
        return false;
    S.data[++S.top]=x;          //指针先+1在放数据
    return true;
}

//出栈
bool Pop(SqStack &S,int &x){
    if(S.top==-1)               //栈空
        return false;
    x=S.data[S.top--];          //先出栈，然后指针-1
    return true;
}

//读取栈顶元素
bool GetTop(SqStack &S,int &x){
    if(S.top==-1)               //栈空
        return false;
    x=S.data[S.top];          //读取
    return true;
}


