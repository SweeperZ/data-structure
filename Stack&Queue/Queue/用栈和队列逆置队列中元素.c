//Q是一个队列，S是一个栈，实现将队列中的元素逆置
//


void Inverser(Stack S,Queue Q){
    while(!QueueEmpty(Q)){
        x=DeQueue(Q);               //队列中元素依次出队
        Push(S,x);                  //元素依次入栈
    }
    while(!StackEmpty(S)){
        Pop(S,x);                   //栈中元素依次出栈
        EnQueue(Q,x);               //入队后，队列中的元素即是逆置后的结果
    }
}
