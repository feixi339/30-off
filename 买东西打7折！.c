#include <stdio.h>
int main()
{
    float p;   
    /* 
    这里的p
	其实就是
	price（价格）的
	缩写啦......
	*/ 
    float s;
    /*
    这里的s
	其实就是
	sale（售卖价格）的 
	缩写啦......
	*/ 
    scanf("%f", &p);
    s=p*0.7; //都能看出来这里是打折的意思吧 
    printf("该电视机的实际售卖价格为：%.2f\n", s);
    return 0;
}

