#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int (*pf)(int,int) = Add;//pf�Ǻ���ָ��
//
//	int (*arr[4])(int, int) = {Add, Sub, Mul, Div};//arr���Ǻ���ָ�������
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d \n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	//����ָ������
//	int (*pfArr[])(int, int) = { 0,Add, Sub, Mul, Div };
//
//	//ָ�򡾺���ָ�����顿��ָ��
//	int (*(*ppfArr)[5])(int, int) = &pfArr;
//
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for ( i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//�����������ĺ���
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//qsort
//void qsort(void* base, //��������ݵ���ʼλ��
//	       size_t num,//�����������Ԫ�صĸ���
//	       size_t width,//�����������Ԫ�صĴ�С����λ���ֽڣ�
//	       int(* comp)(const void* e1, const void* e2)//����ָ�� - �ȽϺ���
//           );

//__cdecl - ��������Լ��

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - * (int*)e2);
	//if (*(int*)e1 > *(int*)e2)
	//{
	//	return 1;
	//}
	//else if(*(int*)e1 == *(int*)e2)
	//{
	//	return 0;
	//}
	//else
	//{
	//	return -1;
	//}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//�������ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	/*bubble_sort(arr, sz);*/
	qsort(arr, sz, sizeof(arr[0]),cmp_int );
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;

}
//int main()
//{
//	int a = 10;
//	//char* pa = &a;//int*
//	void* pv = &a;//void* ���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//	//void* ���޾������͵�ָ�룬���Բ��ܽ����ã�Ҳ����+-����
//	return 0;
//}