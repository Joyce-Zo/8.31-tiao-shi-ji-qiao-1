#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//		bug - 虫子、漏洞

//	调试 - Debug，又称除错，是发现和减少计算机程序或电子仪器设备中程序错误的一个 过 程。
// 步骤：1 - 发现程序存在错误
//		 2 - 以隔离、消除的方式对错误进行定位
//		 3 - 确定错误产生的原因
//		 4.- 提出纠正错误的解决方法
//		 5.- 对程序错误予以改正，并重新测试

//	Debug   - 调试版本，包含调试信息，但不做任何优化，便于程序员调试程序
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		printf("%d\n", i);
//	}
//	for (i = 1; i < 101; i++)
//	{
//		printf("%d\n", 10-i);	// F9 - 切换断点，F5 - 直接执行断点前的代码，跳到断点处
//	}										//		跳到执行逻辑上的下一个断点
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("Joyce ");
//		arr[i] = 0;
//	}
//	return 0;
//}

//int Add(int a, int b)
//{
//	return a + b;	// shift + F11  - 跳出函数内部
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
// 

//void test2()
//{
//	printf("shit\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//	Release - 发布版本，往往是进行各种优化，使代码在大小和运行速度上都是最优的，便于用户使用
//			不可进行调试（F10/F11）

int main()
{
	int i = 0, sum = 0;	// sum 保存最终结果
	int n = 0, ret = 1;	// ret 保存n的阶乘
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <= i; j++)	// F9 切换断点，右击添加条件直接到 i==3 , F5 执行
		{

			ret *= j;
		}
		sum += ret;
		//ret = 1;
	}
	printf("%d", sum);
	return 0;
}