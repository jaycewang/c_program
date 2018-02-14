#include<stdio.h>
void main()
{
    int total,time;
    printf("请输入剩余个数：\n");
    scanf("%d",&total);
    printf("请输入吃桃次数：\n");
    scanf("%d",&time);

        while(total>0&&time>0)
    {
        total=2*(total+1);
        time--;
    }
    printf("总桃子数目：%d\n",total);
}

