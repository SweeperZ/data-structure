//相似：T1，T2都是空的二叉树或者都只有一个根结点，
//或者T1的左子树和T2的左子树是相似的且T1的右子树和
//T2的右子树是相似的。


//递归

int similar(BiTree T1,BiTree T2){
    int leftS,rightS;
    if(!T1&&!T2)
        return 1;                               //T1，T2均为空
    else if(!T1||!T2)
        return 0;                               //只有一个树为空
    else{
        leftS=similar(T1->lchild,T2->lchild);   //递归
        rigthS=similar(T1->rchild,T2->rchild);
        return leftS&&rightS;
    }
}
