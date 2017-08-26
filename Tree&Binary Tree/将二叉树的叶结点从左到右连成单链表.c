//将二叉树的叶结点从左到右连成单链表


LinkList head,pre=NULL;

LinkList InOreder(BiTree b){
    if(b){
        InOrder(b->lchild);                     //中序遍左子树
        if(b->lchild==NULL&&b->rchild==NULL)    //叶结点
            if(pre==NULL){                      //处理第一个叶结点
                head=b;
                pre=b;
            }
            else{                               //将叶结点接入链表
                pre->rchild=b;
                pre=b;
            }
        InOrder(b->rchild);                     //中序遍历右子树
        pre->rchild=NULL;                       //设置链尾
    }
    return head;
}
