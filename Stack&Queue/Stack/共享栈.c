#define maxsize 100

typedef struct{
    int stack[maxsize];
    int top[2];
}stk;

stk s;

int push(int i,int x){
    if(i<0||i>1){
        printf("ջ�Ŵ���\n");
        exit(0);
    }
    if(s.top[1]-s.top[0]==1){
        printf("ջ����\n");
        return 0;
    }
    switch(i){
        case 0:s.stack[++s.top[0]]=x;
            return 1;
            break;
        case 1:s.stack[++s.top[1]]=x;
            return 1;
    }
}

int pop(int i){
    if(i<0||i>1){
        printf("ջ�Ŵ���\n");
        exit(0);
    }
    switch(i){
        case 0:
            if(s.top[0]==-1){
                printf("ջ��\n");
                return -1;
            }
            else
                return s.stack[s.top[0]--];
        case 1:
            if(s.top[1]==-1){
                printf("ջ��\n");
                return -1;
            }
            else
                return s.stack[s.top[1]++];
    }
}
