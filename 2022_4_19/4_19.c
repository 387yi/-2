#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.ѭ���ķ�ʽ�ҵ��������
int func2(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	int i = 0;
	int a1 = 1;
	int a2 = 2;
	int a3 = 3;
	for (i = 3; i <=n; i++)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
	}
	return a3;
}
 2.��ѧ�ķ�ʽ
int func3(int n)
{
	int res = 0;
	for (int i = 0; i <= n / 2; i++)
	{
		int fenzi = 1;
		int fenmu = 1;
		for (int j = 0; j <i; j++) 
		{
			fenzi = (n - i - j) * fenzi;
			fenmu = (i - j) * fenmu;
		}
		res += fenzi / fenmu;
	}
	return res;
}
 3.�ݹ�ķ�ʽ
int jieti(int p)
{
	if (p == 1)
	{
		return 1;
	}
	if (p == 2)
	{
		return 2;
	}
	return jieti(p - 1) + jieti(p - 2);
}
int main()
{
	srand((unsigned int)time(null));
	int a = 0;
	printf("���ٸ�̨��\n�����롷");
	scanf("%d", &a);
	int laoshu = func2(a);
	printf("һ����%d������", laoshu);
	return 0;
}