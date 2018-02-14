#include<stdio.h>
void main()
{
int year;
printf("请输入年份：\n");
scanf("%d",&year);
if(year%4==0&&year%100!=0||year%400==0)
{
printf("所输入年份：%d是闰年\n",year);
}
else
printf("所输入年份%d不是闰年\n",year);
}
