#include <stdio.h>
int main()
{
	//简易计算器
	while (1)
	{
		printf("请输入表达式类型：");
		char k = 0;                                         //定义k为字符类型
		scanf("%c", &k);                                   //先输入要选择的运算类型
		                                                   //计算式要这样输入：3 + 4

		switch (k)
		{
		case '+':
		{
			printf("请输入计算式：\n");
			double a1 = 0;
			double b1 = 0;
			scanf("%lf + %lf", &a1, &b1);
			double c1 = a1 + b1;
			printf("%lf", c1);
			break;
		}
		case '-':
		{
			double a2 = 0;
			double b2 = 0;
			scanf("%lf - %lf", &a2, &b2);
			double c2 = a2 - b2;
			printf("%lf", c2);
			break;
		}
		case '*':
		{
			printf("请输入计算式：\n");
			double a3 = 0;
			double b3 = 0;
			scanf("%lf * %lf", &a3, &b3);
			double c3 = a3 * b3;
			printf("%lf", c3);
			break;
		}
		case '/':
		{
			printf("请输入计算式：\n");
			double a4 = 0;
			double b4 = 0;
			scanf("%lf / %lf", &a4, &b4);
			double c4 = a4 / b4;
			if (b4 == 0)
			{
				printf("除数不能为0！");
				break;
			}
			printf("%lf", c4);
		}
		}





	}
	return 0;
}