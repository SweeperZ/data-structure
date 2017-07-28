//静态链表借助数组来描述线性表的链式存储结构
//它和数组一样，要先分配一段连续的内存空间

#define MaxSize 50          //静态链表的最大长度
typedef struct{             //静态链表的结构类型定义
    int data;               //存储数据元素，可以根据需要改
    int next;               //下一个元素的数组下标
}SLinkList[MaxSize];
