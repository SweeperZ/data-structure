//双链表的结点中只是多了一个指向结点前驱的指针prior
//

typedef struct DNode{
    int data;
    struct DNode *next,*prior;
}DNode,*DLinkList;
