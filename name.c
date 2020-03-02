#include<stdio.h>
int main()
{
int a,b,ch;
printf("enter value of a&b");
scanf("%d%d", &a,&b);
printf("enter choice");
scanf("%d", &ch);
switch(ch)
{
case1:printf("sum=%d", a+b);break;
case2:printf("sub=%d", a-b);break;
defant:printf("invalid operator");
}
}


