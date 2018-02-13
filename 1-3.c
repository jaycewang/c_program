//sizeof()判断类型长度的关键字
#include<stdio.h>
#include<stdlib.h>
int main()
{
printf("size of char is : %d\n",sizeof(char));
printf("size of short is : %d\n",sizeof(short));
printf("size of int is : %d\n",sizeof(int));
printf("size of float is :%d\n",sizeof(float));

char a[]={'a','b','c'};
printf("size of a[] is : %d\n",sizeof(a));
char b[]="abc";
printf("size of b[] is :%d\n",sizeof(b));

system("pause");
return (0);
}
