//已知两个数列A=a1,a2,a3...am,B=b1,b2,b3...bn
//存在两个单链表中，设计算法判断序列B是否是A的
//连续子序列
//从两个链表的第一个结点开始遍历，若数据相等，则后移指针
//若不等，则从A的上一个比较结点的后继结点开始从新和B比较
//直到和B链表的最后一个结点比较完，
//A到尾而B未到，则没有找到连续子序列

int Pattern(LinkList A,LinkList B){
    LNode *p=A,*pre=p,*q=B;
    while(p&&q){
        if(p->data==q->data){
            p=p->next;
            q=q->next;
        }
        else{
            pre=pre->next;
            p=pre;
            q=B;
        }
    }
    if(q==NULL)
        return 1;
    else
        return;
}
