//设计算法求一颗树中任意两结点pq最近公共祖先r


typedef struct{
    BiTree t;
    int tag;        //tag=0,左子女被访问  tag=1右子女被访问
}stack;

stack s[],s1[];
void Ancestor(BiTree ROOT,BiTNode *p,BiTNode *q){
    int top=0;
    BiTree b=ROOT;
    while(b||top>0){
        while(b&&b!=p&&b!=q){
            while(b){
                s[++top].t=b;
                s[top].tag=0;
                b=b->lchild;
            }
        }

        while(top!=0&&s[top].tag==1){
            if(s[top].t==p){
                for(i=1;i<=top;i++)
                    s1[i]=s[i];
                top1=top;
            }
            if(s[top].t==q)
            for(i=top;i>0;i--){
                for(j=top;j>0;j--)
                    if(s1[j].t==s[i].t)
                        return s[i].t;
            }
            top--;
        }


        if(top){
            s[top].tag=1;
            b=s[top].t->rchild;                 //处理右子树
        }
    }
    return NULL;
}
