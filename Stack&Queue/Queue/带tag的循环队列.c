//设置tag的循环队列入队
int EnQueue(SqQueue &Q,int x){
    if(Q.front==Q.rear&&Q.tag==1)
        return 0;                   //队满
    Q.data[Q.rear]=x;
    Q.rear=(Q.rear+1)%MaxSize;
    Q.tag=1;
    return 1;
}

//设置tag的循环队列出队
int DeQueue(SqQueue &Q,int &x){
    if(Q.front==Q.rear&&Q.tag==0)
        return 0;                   //队空
    x=Q.data[Q.front];
    Q.front=(Q.front+1)%MaxSize;
    Q.tag=0;
    return 1;
}


