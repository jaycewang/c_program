#include<stdio.h>
#include<conio.h>
#include<stdlib.h>  //调用清屏系统函数system("CLS")
void main()
{
char z;
float a,b,c;
while(1)
    {
    system("CLS");
    printf("----计算器----\n");
    printf("=====菜单=====\n");
    printf("功能选项:\n");
    printf("1.加法\n");
    printf("2.减法\n");
    printf("3.乘法\n");
    printf("4.除法\n");
    printf("0.退出\n");
    printf("请选择功能（0-5）:\n");
    while(1)
        {
          z=getch();
          if(z>'0'&&z<='4')
          {
              printf("您的选择是:%c\n",z);
              if(z=='1')
              {
                  printf("请输入两个加数：\n");
                  scanf("%f%f",&a,&b);
                  c=a+b;
                  printf("%f+%f=%f\n",a,b,c);
              }
              else if(z=='2')
              {
                  printf("请输入被减数和减数：\n");
                  scanf("%f%f",&a,&b);
                  c=a-b;
                  printf("%f-%f=%f\n",a,b,c);
              }
              else if(z=='3')
              {
                  printf("请输入两个因数：\n");
                  scanf("%f%f",&a,&b);
                  c=a*b;
                  printf("%f*%f=%f\n",a,b,c);
              }
              else
              {
              printf("请输入被除数和除数：\n");
              scanf("%f%f",&a,&b);
              c=a/b;
              printf("%f/%f=%f\n",a,b,c);
              }

          }
          else if(z=='0')
          {
              printf("退出程序！\n");
              break;

          }
          else
          {
              printf("输入有误\n");

          }
        }


    }

}
