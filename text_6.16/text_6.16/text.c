#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;//a�����α���ռ���ĸ��ڴ�ռ�
//	int* pa = &a;
//	//pa��һ��ָ�������������ŵ�ַ
//	return 0;
//}
//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//	//sizeof���ص�ֵ���������޷������� unsigned int
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//
//	return 0;
//}
//ָ�����͵�����
//16���� 0 1 2 3 4 5 6 7 8 9 a b c d e f
//int main()
//{
//	int a = 0x11223344;
//	//���ɶ�����0001000100100010
//	int* pa = &a;
//	*pa = 0;
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//
//	char* pc = (char*)&a;//int *
//	*pc = 0;
// 	return 0;
//
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	
//	printf("pa = %p\n", pa);
//	printf("pa+1 = %p\n", pa+1);
//
//	printf("pc = %p\n", pc);
//	printf("pc+1 = %p\n", pc+1);
//
//	return 0;
//}
int main()
{
	int a = 0;
	float* pf = &a;
	*pf = 100.0;

	return 0;
}