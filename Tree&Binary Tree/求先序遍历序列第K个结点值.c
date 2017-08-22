//二叉树采用二叉链表存储，设计算法
//求先序遍历序列中第k个结点的值


int i;                      //表示遍历序号的全局变量
int PreNode(BiTree b,int k){
    if(b==NULL)             //空结点
        return '#';
    if(i==k)                //当前结点为第k个结点
        return b->data;
    i++;                    //下一个结点
    ch=PreNode(b->lchild,k);//左子树中递归查找
    if(ch!='#')
        return ch;
    ch=PreNode(b->rchild,k);//右子树中递归查找
        return ch;
}
