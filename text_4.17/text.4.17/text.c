#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int i = 0;
//	char passward[20] = { 0 };
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", passward);
//		if (strcmp(passward,"Lovewangmin") == 0)
//		{
//			printf("������ȷ,��������һ���ǣ�");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���������Ѵ������Σ���30���Ӻ�����");
//	}
//	return 0;
//}
int main() 
{
	int i = 0;
	char password[20] = { 0 };
	printf("����������:>");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password,"Lovelikaixuan") == 0)
		{
			printf("������ȷ��");
			break;
		}
		else
		{
			printf("��������������������롣");
		}
	}
	if (i == 3)
		printf("�����������ʮ���Ӻ����ԡ�");
	return 0;
}
