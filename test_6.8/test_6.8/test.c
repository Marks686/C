#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void BubbleSort(int array[], int size)
{
    int i, j;
    ���ѭ������ð�����������
    size-1��ʾ�����һ��������ֻʣ1��Ԫ�أ�����ð�ݿ���ʡ�ԡ�
    for (i = 0; i < size - 1; i++)
    {
        for (j = 1; j < size - 1; j++)
        {
            if (array[j - 1] > array[j])
            {
                int temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }
}
int main() 
{
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
    BubbleSort(arr, len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void BubbleSort(int array[], int size)
{
    int i, j;
    ���ѭ������ð�����������
    size-1��ʾ�����һ��������ֻʣ1��Ԫ�أ�����ð�ݿ���ʡ��
    for (i = 0; i < size - 1; i++)
    {
        int isChange = 0;
        ����ð�ݵķ�ʽ�������ڵ�����Ԫ�ؽ��бȽϣ�ǰһ������
        ��һ��Ԫ��ʱ���������������ݣ�����ֱ�������ĩβ
        for (j = 1; j < size - 1; j++)
        {
            if (array[j - 1] > array[j])
            {
                int temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
                isChange = 1;//�������ð�ݽ������ݽ����ˣ�˵������
                ��������ģ��ͽ�isChange����Ϊ1
            }
        }
        �������ð���У�Ԫ��û�н������򱾴ο�ʼð���ǣ������Ѿ������ˣ�
        �����ð�ݿ��Բ��ý�����
        if (!isChange)
            return;
    }
}
int main() 
{
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
    BubbleSort(arr, len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}