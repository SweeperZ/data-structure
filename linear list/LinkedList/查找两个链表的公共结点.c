//����������������д�㷨������������Ĺ������
//�������������һ��������㣬��ô���������������н�㶼��
//�غϵģ����ǵ����һ������Ȼ��ͬһ����㣬��ˣ��ֱ����
//�����������һ����㣬�����������һ�������ͬ���й�����㣬����û��
//����������������ͬ�������������������ȱ��������Ľ�㣬Ȼ���������
//ͬ������
//
//


LinkList Search_Common_Node(LinkList L1,LinkList L2){
    int len1=Length(L1),len2=Length(L2);            //���ú���������������
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



