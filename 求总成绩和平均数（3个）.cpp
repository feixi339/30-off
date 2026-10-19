#include <stdio.h>
int main()
{
    float a,b,c,total,average;
    scanf("%f %f %f",&a,&b,&c);
    total=a+b+c;
    average=total/3;
    printf("total=%.1f,average=%.1f",total,average);
    return 0;
}

