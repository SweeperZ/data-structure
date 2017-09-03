//二叉排序树的构造

void Creat_BST(BiTree &T,int str[],int n){
    T=NULL;                         //初始时为空树
    int i=0;
    while(i<n){                     //依次将每个元素插入
        BST_Insert(T,str[i]);
        i++;
    }
}
