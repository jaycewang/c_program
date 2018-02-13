#include<stdio.h>

//设计atm系统，假设已知账号123456，密码88888888
void main()
{
int admin,password,n=0,z,ye=1000,qk,ck,i=1;
printf("欢迎使用自动柜员机\n");
while(i==1)
{
    printf("请输入您的账号：\n");
    scanf("%d",&admin);
    printf("请输入您的密码：\n");
    scanf("%d",&password);
    if (admin==123456&&password==88888888)
    {

    while(i==1)
    {
    printf("欢迎使用，请选择您需要的服务项目：\n");
    printf("1.查询余额\n");
    printf("2.取款\n");
    printf("3.存款\n");
    printf("4.退出\n");
    scanf("%d",&z);
    switch(z)
    {
    case 1:
        printf("您的余额是：%d\n",ye);
        break;
    case 2:
        printf("请输入取款金额：\n");
        scanf("%d",&qk);
        if(qk<=ye)
        {
            printf("请收好现金%d元\n",qk);
            ye=ye-qk;
        }
        else
            {
            printf("余额不足\n");
            }
        break;
    case 3:
        printf("请输入存款金额：\n");
        scanf("%d",&ck);
        printf("存款%d元成功\n",ck);
        ye=ye+ck;
        break;
    case 4:
    printf("退出程序\n");
    i=0;
    break;

    }

    }
    break;
    }
    else
        {
            printf("账号密码错误\n");
            n=n+1;
            if(n==3)
            {
                printf("密码错误三次,退出系统\n");
                break;
            }

        }

}
}
