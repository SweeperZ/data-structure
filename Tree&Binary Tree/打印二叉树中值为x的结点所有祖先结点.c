//�ڶ������в��ҽ��x��������������Ƚ�㣬�����Ľ��x����С�ڵ���1


typedef struct{
    BiTree t;
    int tag;        //tag=0,����Ů������  tag=1����Ů������
}stack;

void Search(BiTree b,int x){
    stack s[];
    int top=0;
    while(b||top>0){
        while(b&&b->data!=x){                   //������
            s[++top].t=b;
            s[top].tag=0;
            b=b->lchild;
        }
        if(b->data==x){                         //������Ƚ��
            pirntf("x����������Ƚ��Ϊ��\n");
            for(int i=1;i<=top;i++)
                printf("%d,",s[i].t->data);
            exit(1);
        }
        while(top!=0&&s[top].tag==1)            //��ջ
            top--;
        if(top){
            s[top].tag=1;
            b=s[top].t->rchild;                 //������
        }
    }
}
