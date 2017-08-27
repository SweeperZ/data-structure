typedef struct CSNode{
    int data;                               //数据域
    struct CSNode *firstchild,*nextsibling; //第一个孩子和右兄弟指针
}CSNode,CSTree;
