//在二叉树中查找结点x，输出其所有祖先结点，这样的结点x个数小于等于1


typedef struct{
    BiTree t;
    int tag;        //tag=0,左子女被访问  tag=1右子女被访问
}stack;

void Search(BiTree b,int x){
    stack s[];
    int top=0;
    while(b||top>0){
        while(b&&b->data!=x){                   //左子树
            s[++top].t=b;
            s[top].tag=0;
            b=b->lchild;
        }
        if(b->data==x){                         //输出祖先结点
            pirntf("x结点所有祖先结点为：\n");
            for(int i=1;i<=top;i++)
                printf("%d,",s[i].t->data);
            exit(1);
        }
        while(top!=0&&s[top].tag==1)            //退栈
            top--;
        if(top){
            s[top].tag=1;
            b=s[top].t->rchild;                 //右子树
        }
    }
}
