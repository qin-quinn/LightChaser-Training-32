#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int* arr;
    int sum = 0;
    double avg;

    //输入数字个数
    printf("请输入数字的个数：");
    scanf("%d", &n);

    //动态申请内存，n个int大小的空间
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)   // 内存申请失败判断（规范要求）
    {
        printf("内存分配失败！\n");
        return -1;
    }

    //循环输入每个数字
    printf("请依次输入 %d 个整数：\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i]; //累加求和
    }

    //计算平均值，转浮点
    avg = (double)sum / n;
    printf("平均值 = %.2f\n", avg);

    // 释放动态内存！题目硬性要求
    free(arr);
    arr = NULL;  //置空，防止野指针

    return 0;
}