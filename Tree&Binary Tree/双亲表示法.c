#define MAX_TREE_SIZE 100           //�����������

typedef struct{                     //���Ľ�㶨��
    int data;                       //����Ԫ��
    int parent;                     //˫��λ����
}PTNode;

typedef struct{                     //�������Ͷ���
    PTNode node[MAX_TREE_SIZE];     //˫�ױ�ʾ
    int n;                          //�����
}PTree;
