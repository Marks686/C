#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	double total;
//	int day;
//	double sum;
//	int  i = 0;
//	scanf("%lf%d", &total, &day);
//	for (i = 0; i < day; i++)
//	{
//		sum = total*0.01;
//		total += sum;
//	}
//	printf("%lf",total);
//	return 0;
//}
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//void exchange_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) &&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//	}
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	exchange_arr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//    int i = 0;
//    int score;
//    int grade;
//    for (i = 1; i < 7; i++)
//    {
//        scanf("%d", &score);
//        score = score / 10;
//        switch (score)
//        {
//        case 10: 
//        case 9: 
//        case 8: 
//        case 7: 
//        case 6:
//            grade = 'P'; break;
//        default:
//            grade = 'F'; break;
//        }
//        putchar(grade);
//    }
//    printf("Thanks");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch[1000];
//	char c;
//	int i, word = 0, num = 0;
//	gets(ch);
//	for (i = 0; (c = ch[i]) != '\0'; i++)
//	{
//		if (c == ' ')
//			word = 0;
//		else if (word == 0)
//		{
//			word = 1;
//			num++;
//		}
//	}
//	printf("%d", num);
//
//	return 0;
//}
//#include <stdio.h>
//void swap(int* x, int* y)
//{
//	int  t;
//	t = *x; *x = *y; *y = t;
//	return 0;
//}
//int main(void)
//{
//	int a = 3, b = 2;
//	swap(&a, &b);
//	printf("%d#%d#", a, b);
//	return 0;
//}
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		*str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d", len);
//	return 0;
//}

//size_t my_strlen(const char* str) {
//    int count = 0; //����������
//    while (*str != '\0') { //�� str �����ã���� *str ���� \0
//        str++; // ָ������ƶ�1λ��char��
//        count++; // ������+1
//    }
//    return count; //���ؼ�����
//}
//
//int main() {
//    char arr[] = "abcdef";
//    int len = my_strlen(arr);
//    printf("len = %d\n", len);
//
//    return 0;
//}
//#include<stdio.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	//*dest = *src;//����'\0'
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}