#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int rand = 0;
//int main()
//{
//	printf("hello bit\n");
//	printf("%d\n",rand);
//
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>

namespace bit
{
	int rand = 0;
}

//int main()
//{
//	printf("hello bit\n");
//	printf("%p\n", rand);
//	printf("%p\n", bit::rand);
//
//
//	return 0;
//}

//C++��׼��Ķ�������std�����ռ�
//IO��
//namespace
#include<iostream>
//using namespace std

int main()
{
	//������
	//�Զ�ʶ������
	std::cout << "hello world" << std::endl;
	int i = 10;
	double j = 10.11;
	std::cout << i << " " << j <<&i<< std::endl;

	return 0;
}

