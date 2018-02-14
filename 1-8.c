#include<stdio.h>
void main()
{
    int start,end,step,i,sum=0;
    printf("请输入起始项：\n");
    scanf("%d",&start);
    printf("请输入末项：\n");
    scanf("%d",&end);
    printf("请输入步长：\n");
    scanf("%d",&step);
    for(i=start;i<=end;i+=step)
    {
        sum=sum+i;
    }
    printf("等差数列和为：%d",sum);
}
