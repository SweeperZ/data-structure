//采用层次遍历，将所有的结点和对应的层次放在一个队列中
//然后通过扫描队列求出各层次的结点总数，最大的层结点数就是二叉树宽度


typedef struct{
    BiTree data[MaxSize];           //保持队列中的结点指针
    int level[MaxSize];
    int front,rear;
}Qu;

int BTWidth(BiTree b){
    BiTree p;
    int k,max,i,n;
    Qu.front=Qu.rear=-1;            //队列为空
    Qu.rear++;
    Qu.data[Qu.rear]=b;             //根结点入队
    Qu.level[Qu.rear]=1;            //根层次为1
    while(Qu.front<Qu.rear){
        Qu.front++;                 //出队
        p=Qu.data[Qu.front];        //出队结点
        k=Qu.level[Qu.front];
        if(p->lchild!=NULL){        //左孩子入队
            Qu.rear++;
            Qu.data[Qu.rear]=p->lchild;
            Qu.level[Qu.rear]=k+1;
        }
        if(p->rchild!=NULL){        //右孩子入队
            Qu.rear++;
            Qu.data[Qu.rear]=p->rchild;
            Qu.level[Qu.rear]=k+1;
        }
    }
    max=0;
    i=0;
    k=1;
    while(i<Qu.rear){
        n=0;
        while(i<=Qu.rear&&Qu.level[i]==k){
            n++;
            i++;
        }
        k=Qu.level[i];
        if(n>max)
            max=n;
    }
    return max;
}





