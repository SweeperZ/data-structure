//一维数组的动态分配

#define INITSIZE 100
typedef struct{
    int *data;
    int MaxSize,length;
}SeqList;

//L.data=(int *)malloc(sizeof(int)*INITSIZE)
//C初始动态分配语句

