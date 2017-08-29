//通过层次序列及街道度构造孩子兄弟链表


#define MaxNode 15
void CreatCSTree(CSTree &T，int e[],int degree[,int n]){
    CSNode *pointer=new CSNode[MaxNode];
    int i,j,d,k=0;
    for(i=0;i<n;i++){
        pointer[i]=new CSNode;
        pointer[i]=->data=e[i];
        pointer[i]->lchild=pointer[i]->rsibling=NULL;
    }
    for(i=0;i<n;i++){
        d=degree[i];
        if(d){
            k++;
            pointer[i]=->lchild=pointer[k];
            for(j=2;j<=d;j++)
                pointer[k-1]->rsibling=pointer[k];
        }
    }
    T=pointer[0];
    delete [] pointer;
}
