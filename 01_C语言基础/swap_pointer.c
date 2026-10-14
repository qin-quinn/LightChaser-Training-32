#include <stdio.h>
void swap(void* p1, void* p2, int len);
int main()
{
	int a = 100;
	int b = 200;
	int len = 4;//长度可以自己改
	swap(&a, &b, len);
	printf("a=%d,b=%d\n", a, b);

	return 0;
}
void swap(void* p1, void* p2, int len)
{
	char* pc1 = p1;//赋值地址值
	char* pc2 = p2;

	char temp = 0;
	for (int i = 1;i < len; i++)
	{
		temp = *pc1;//变量交换
		*pc1 = *pc2;
		*pc2 = temp;

		pc1++;
		pc2++;

	}
}