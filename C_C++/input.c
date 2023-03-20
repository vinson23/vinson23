#include<stdio.h>                            //预处理文件"stdio.h"文件，标准库文件，包含标准输入输出函数
 
int main()                                  //main函数入口
{
    int number;                             //定义一个整数型变量number，用于存放输入的数字。
    
    printf("请输入一个整数：\n");              //利用printf函数输出提示语
    scanf("%d",&number);                     //利用scanf函数实现格式输入，%d为整数型输入。
    printf("你输入的数字是：%d\n",number);     //利用print函数格式输出变量number，即输入的数字。。

    getchar();                              //保持窗口
    return 0;                               //返回值0
}