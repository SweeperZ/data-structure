#include<stdio.h>

int Fib(int n){
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);
}

int main(void)
{
    int n;
    printf("ÇëÊäÈënµÄÖµ£º\n");
    scanf("%d",&n);
    int i;
    for(i=0;i<n+1;i++)
        printf("\t%d\n",Fib(i));

    return 0;
}

