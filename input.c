#include <stdio.h>
/*
 *这是一个统计用户输入次数和统计总和的小程序
 *
 * */
int main()
{

    printf("\n\n	欢迎使用兄弟会之平均数计算器\n\n\n");
    printf("[使用方法]\n");
    printf("例:20\n   40\n   0 >>>>输入0即可结束输入\n   输入的总和:\n   输入的次数:\n   平均值为:\n   按照以上方式操作即可\n\n");
    //首先声明四个变量分别代表循环的为真条件,用户输入内容,输入次数
     //输入内容的总合
    int flag=1;
    int i;
    int count=0;
    int s=0;
    //通过永远为真的循环无限接收用户的输入
    printf("请输入想要计算的数字,按0结束:\n");
    while(flag){
        scanf("%d",&i);
	//当用户输入0时,即程序终止结束
	if(0==i) break;
	count++;
	s+=i;
    }
    //通过输出流将用户的输入次数和内容总和输出
    //方便后续程序的使用
    printf("您输入的总和为:\n");
    printf("%d\n",s);
    printf("您输入的次数为:\n");
    printf("%d\n",count);

    //计算总和和次数的平均值
    float v=s/count;
    printf("平均值为:%f\n",v);
    return 0;
}
