//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////#include <stdio.h>
////void test(int arr[])//ok?
////{}
////void test(int arr[10])//ok?
////{}
////void test(int* arr)//ok?
////{}
////void test2(int* arr[20])//ok?
////{}
////void test2(int** arr)//ok?
////{}
////int main()
////{
////	int arr[10] = { 0 };
////	int* arr2[20] = { 0 };
////	test(arr);
////	test2(arr2);
////}
////#include <stdio.h>
////void print(int* p, int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d\n", *(p + i));
////	}
////}
////int main()
////{
////	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
////	int* p = arr;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	//һ��ָ��p����������
////	print(p, sz);
////	return 0;
////}
////int arr[5] = { 0 };
//////&������ - ȡ������ĵ�ַ
////int(*p)[5] = &arr;//����ָ��
////
//// 	//int a = 10;
// //   int * pa = &a;
//	//*pa = 20;
//	// printf("%d ", *pa);
////
//////&������ - ȡ���ľ��Ǻ����ĵ�ַ�أ�
/////*printf("%p ", &Add);*/
////int(*pf)(int, int) = &Add;
////int ret = (*pf)(2, 3);
////printf("%d\n", ret);
//int Add(int x, int y)
//{
//	return x + y;
//}
//void calc(int (*pf)(int,int))
//{
//	int a = 1;
//	int b = 4;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	calc(Add);
//	return 0;
//}
//
//@[TOC](����Ŀ¼)
//
//-- -
//
//
//# һ�����鴫�Ρ�ָ�봫��
//д�����ʱ�������ѡ����顿���ߡ�ָ�롿�����������Ǻ����Ĳ������������أ�
//## 1.һά���鴫��
//> **һά���鴫�� * *
//
//![���������ͼƬ����](https://img-blog.csdnimg.cn/33da62c8283f4bcd98a76ab9d20a9f92.png)
//## 2.��ά���鴫��
//> **��ά���鴫�� * *
//
//![���������ͼƬ����](https://img-blog.csdnimg.cn/5b18c3bb6ddc400aa6fe9077b7e21f5d.png)
//
//## 3.һ��ָ�봫��
//> **һ��ָ�봫�� * *
//
//
//![���������ͼƬ����](https://img-blog.csdnimg.cn/e78d1b3292b2446786f6c05c6b67d4ce.png)
//## 4.����ָ�봫��
//
//> ����ָ�봫��
//
//
//![���������ͼƬ����](https://img-blog.csdnimg.cn/488492e8469b48a0a83b9bfbf1bb652b.png)
//
//# ��������ָ��
//
//һ���Ǻ���ָ�������ָ�����
//
//
//** ����ָ�롪ָ�������ָ���������ָ��
//����ָ�롪ָ������ָ����Ǻ���ָ��**
//
//```c
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//&������ - ȡ�����ǲ��Ǻ����ĵ�ַ�أ�
//	printf("%p ", &Add);
//	//�����&Add ����Add �ó��Ľ����һ����
//	return 0;
//}
//
//```
//
//> ** ��ӡ�����Ǻ����ĵ�ַ**
//
//
//```c
//003410B4
//```
//ȡ��ַ������ȷʵ�õ����� * *�����ĵ�ַ * *
//�Ժ�����˵�� & �������ͺ��������Ǻ����ĵ�ַ
//
//> **��δ溯���ĵ�ַ����ʲôӦ�ã� * *
//
//
//```c
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int, int) = &Add;
//	int ret = (*pf)(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}
//```
//> ** ��ӡ���**
//
//```c
//5
//```
//������ʵ�������˼�ӵģ�ͨ����ַ�����ú�����ͨ������ָ�ŷ��ʺ�����
//
//> **�򵥵�Ӧ�ã� * *
//
//```c
//int Add(int x, int y)
//{
//	return x + y;
//}
//void calc(int (*pf)(int, int))
//{
//	int a = 1;
//	int b = 4;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	calc(Add);
//	return 0;
//}
//```
//
//> ** ������**
//
//```c
//5
//```
//���˺���ָ�������һ�����������ǾͿ��԰Ѻ�����ַ���д��Σ���������һ���������������������Ǹ�������ʱ�򣬾Ϳ���ͨ������ָ����á�
//
