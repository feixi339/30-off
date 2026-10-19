#include<stdio.h>
int main()
{
    double a;
    int b;
    double c;
    scanf("%lf", &a);
    b=(int)a;   
    c=a-b;
    printf("整数部分：%d\n",b);
    printf("小数部分：%f",c);
    return 0;
}

