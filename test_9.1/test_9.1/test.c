#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

//ģ��ʵ��strlen
//1.����������
size_t my_strlen(const char* str)
{
	size_t count = 0;
	assert(str); 
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main1()
{
	char arr[] = "abcdef";
	size_t n = my_strlen(arr);
	printf("%u\n", n);
	return 0;
}
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int main2()
{
	char arr[] = "abcdef";
	size_t n = my_strlen(arr);
	printf("%u\n", n);
	return 0;
}
//2.ָ��-ָ��
//3.�ݹ�
int main3()
{ 
	char name[20] = { 0 };
	strcpy(name, "zhangsan");//��\0����ǰȫ������
	printf("%s\n", name);
	return 0;
}
//char* my_strcpy(char* str2, const char* str1)
//{
//	assert(str2 && str1);
//	char* ret = str2;
//	while (*str1 != '\0')
//	{
//		*str2 = *str1;
//		str1++;
//		str2++;
//	}
//	str2 = str1;
//	return ret;
//}
char* my_strcpy(char* str2, const char* str1)
{
	assert(str2 && str1);
	char* ret = str2;
	while (*str2++ = *str1++)
	{
			;
	}
		return ret;
}
int main4()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}
//�ַ���׷��

//char* my_strcat(char* dest, char* src)
//{
//	assert(str2 && str1);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
int main5()
{
	char arr1[20] = "hello ";
	my_strcat(arr1, "word");
	//my_strcat(arr1, arr1);�Լ����Լ�׷�ӣ�������ѭ��
	printf("%s\n", arr1);
}
int main()
{
	char arr1[20] = "zhangsan";
	char arr2[20] = "zhgnsanfeng";
	my_strcmp(arr1, arr2);
	return 0;
}