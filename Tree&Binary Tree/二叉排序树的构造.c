void Creat_BST(BiTree &T,int str[],int n){
    T=NULL;
    int i=0;
    while(i<n){
        BST_Insert(T,str[i]);
        i++;
    }
}
