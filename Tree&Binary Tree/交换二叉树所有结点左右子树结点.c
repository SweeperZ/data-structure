//交换二叉树所有结点左右子树结点


void swap(BiTree b){
    if(b){
        swap(b->lchild);        //递归交换左子树
        swap(b->rchild);        //递归交换右子树
        t=b->lchild;            //交换左右孩子结点
        b->lchild=b->rchild;
        b->rchild=t;
    }
}
