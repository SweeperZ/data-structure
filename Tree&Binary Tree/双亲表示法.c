#define MAX_TREE_SIZE 100           //树中最多结点数

typedef struct{                     //树的结点定义
    int data;                       //数据元素
    int parent;                     //双亲位置域
}PTNode;

typedef struct{                     //树的类型定义
    PTNode node[MAX_TREE_SIZE];     //双亲表示
    int n;                          //结点数
}PTree;
