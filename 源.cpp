#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//		bug - ���ӡ�©��

//	���� - Debug���ֳƳ����Ƿ��ֺͼ��ټ�����������������豸�г�������һ�� �� �̡�
// ���裺1 - ���ֳ�����ڴ���
//		 2 - �Ը��롢�����ķ�ʽ�Դ�����ж�λ
//		 3 - ȷ�����������ԭ��
//		 4.- �����������Ľ������
//		 5.- �Գ���������Ը����������²���

//	Debug   - ���԰汾������������Ϣ���������κ��Ż������ڳ���Ա���Գ���
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
//		printf("%d\n", 10-i);	// F9 - �л��ϵ㣬F5 - ֱ��ִ�жϵ�ǰ�Ĵ��룬�����ϵ㴦
//	}										//		����ִ���߼��ϵ���һ���ϵ�
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
//	return a + b;	// shift + F11  - ���������ڲ�
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
//	Release - �����汾�������ǽ��и����Ż���ʹ�����ڴ�С�������ٶ��϶������ŵģ������û�ʹ��
//			���ɽ��е��ԣ�F10/F11��

int main()
{
	int i = 0, sum = 0;	// sum �������ս��
	int n = 0, ret = 1;	// ret ����n�Ľ׳�
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <= i; j++)	// F9 �л��ϵ㣬�һ��������ֱ�ӵ� i==3 , F5 ִ��
		{

			ret *= j;
		}
		sum += ret;
		//ret = 1;
	}
	printf("%d", sum);
	return 0;
}