#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <Windows.h>
int main()
{
	char input[100] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("�ٺ���ĵ��Խ���30s��ػ�����������룺����С˧����Ҫ�ú�ѧϰ���������˧��===111��˧�� ��ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input,"����С˧����Ҫ�ú�ѧϰ���������˧��===111��˧��") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}