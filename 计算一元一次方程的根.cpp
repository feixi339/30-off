#include <stdio.h>//开机必备 
int main()//依旧开机必备
{
    float a;//这俩就是 
    float b;//ax+b的那个a和b 
    float x;//这玩意是方程的解，输出的就是这玩意 
    scanf("%f,%f",&a,&b);
    if(a==0)
	{
	printf("Error");//如果是0，直接就不对 
    }
	else
    {
	x=-b/a;
    printf("%f",x);//也是直接就得出答案了哈 
    }
	return 0;//不要忘记结束哦 
}

