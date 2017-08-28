//求以孩子兄弟法存储的森林的叶子结点数


typedef struct node{
    int data;
    struct node *fch,*nsib;         //孩子与兄弟域
}*Tree;

int Leaves(Tree t){
    if(!t)
        return 0;
    if(t->fch==NULL)                //若结点无孩子则必为叶子
        return 1+Leaves(t->nsib);   //返回叶子结点及其兄弟子树中的叶子数
    else
        return Leaves(t->fch)+Leaves(t->nsib);  //孩子子树和兄弟子树中的叶子结点数之和
}
