#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>



//int main()
//{
//	int arr[10] = { 0 };
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��ϵͳ���Զ������ڴ�ռ�
//	return 0;
//}
int main1()
{
	int arr[10] = { 0 };
	//��̬�ڴ濪��
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	free(p);
	p = NULL;

	return 0;
}
int main2()
{
	while (1)
	{
		malloc(1);
	}
	return 0;
}
//kai10gekongjian 
int main3()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;

	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	//�ͷ�
	free(p);
	p = NULL;
	return 0;
}



int main4()
{
	int arr[10] = { 0 };
	//��̬�ڴ濪��
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//����
	int* ptr = (int*)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}

	//ʹ��
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;

	return 0;
}

int main5()
{
	realloc(NULL, 40);//�ȼ���malloc(40);
	return 0;
}
//�Զ�̬���ٿռ��Խ�����
int main6()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//����
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		p[i] = i;
	}
	free(p);
	p = NULL;
	return 0;
}

//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�

int main7()
{
	int a = 10;
	int* p = &a;

	free(p);
	p = NULL;
	return 0;
}

//ʹ��free�ͷŶ�̬�ڴ濪�ٵ�һ����

int main8()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*p = i;
		p++;
	}
	free(p);
	p = NULL;
	return 0;
}

//��ͬһ��ռ�Ķ���ͷ�

int main9()
{
	int* p = (int*)malloc(40);

	free(p);
	//һ��Ҫ��p��Ϊ��ָ��

	free(p);
	return 0;
}


//��̬�����ڴ������ͷţ��ڴ�й©��

void test()
{
	int* p = (int*)malloc(100);
	//......

	int flag = 0;
	scanf("%d", &flag);
	if (flag == 5)
	{
		return;
	}

	//���flag == 5��free��û������ִ��
	free(p);
	p = NULL;
}
int* test2()
{
	int* p = (int*)malloc(100);
	if (p == NULL)
	{
		return p;
	}
	//�ռ俪�ٳɹ�

	//...........

	return p;
}
int main10()
{
	//test();
	int* ret = test2();
	//�����ͷ���

	return 0;
}

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}