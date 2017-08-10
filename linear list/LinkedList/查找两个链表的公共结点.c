//给定两个单链表，编写算法查找两个链表的公共结点
//如果两个链表有一个公共结点，那么这个公共结点后的所有结点都是
//重合的，他们的最后一个结点必然是同一个结点，因此，分别遍历
//两个链表到最后一个结点，若两链表最后一个结点相同则有公共结点，否则没有
//先让两个链表做到同步遍历，即长的链表先遍历长出的结点，然后与短链表
//同步遍历
//
//


LinkList Search_Common_Node(LinkList L1,LinkList L2){
    int len1=Length(L1),len2=Length(L2);            //调用函数计算两个链表长
    int dist;
    LinkList longList,shortList;
    if(len1>len2){
        longList=L1->next;
        shortList=L2->next;
        dist=len1-len2;
    }
    else{
        longList=L2->next;
        shortList=L1->next;
        dist=len2-len1;
    }
    while(dist--)
        longList=longList->next;
    while(longList){
        if(longList==shortList)
            return longList;
        else{
            longList=longList->next;
            shortList=shortList->next;
        }
    }
    return NULL;
}



