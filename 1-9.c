#include<stdio.h>
void main()
{
    int a[3][4];
    int i,j;
    int max,min;
    printf("请输入3x4数组元素值：\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    min=a[0][0];
    printf("您输入的数组是：\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
     for(j=0;j<4;j++)
     {
       if(a[i][j]>max)
       max=a[i][j];
       if(a[i][j]<min)
       min=a[i][j];
        }
        }
        printf("数组中最大元素：%d\n",max);
        printf("数组中最小元素：%d\n",min);
}
