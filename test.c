#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//ʵ��strlen(����һ����ʼλ�ã��Ӹ�λ�ÿ�ʼ������ֱ������\0)����
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	//size_t(typedef unsigned int     size_t;)
//	if ((strlen("abc") - strlen("abcde"))>0)//��Ϊstrlen����ֵΪsize_t,��unsigned int
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");//���Ϊhehe
//	}
//	return 0;
//}��������������������������������������������������������������������������������
//ʵ��strcpy(�ַ�������������\0)
//#include<assert.h>
//void my_strcpy(char* arr1,char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	while (*arr1 && *arr2)//�������Ա�֤���arr1���ַ�С��arr2 ֵ����arr1�п��Դ��µ�ֵ
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = '\0';
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cvt";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}������������������������������������������������������������������������������������
//�Ż�
//#include<assert.h>
//char* my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1!=NULL);
//	assert(arr2!=NULL);
//	char* ret = arr1;
//	while (*arr1++ = *arr2++)//�������arr1���ַ�С��arr2 ��ֵ ������
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] ="abcdef";
//	char arr2[] = "cvt";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char a1[10] = "abcxxx";
//	char a2[] = "def";
//	strcat(a1, a2);//char * strcat ( char * destination, const char * source ); ����ֵΪchar*
//	printf("%s\n", a1);//��a1��\0��ʼ׷�ӣ���a2��\0����������\0
//	return 0;
//}��������������������������������������������������������
//ʵ��strcat
//char* my_strcat(char* arr1, char* arr2)
//{
//	//�ҵ�arr1�е�\0
//	char* ret = arr1;
//	while (*arr1++)
//	{
//		;
//	}
//	*arr1--;//�Ϸ�����\0���Ի�++һ��
/*
�򽫴����Ϊ
while(*arr1!='\0')
{
	arr1++;
}
�Ͳ��ü�arr1-- ��
*/
//	//��ʼ׷��
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[] = "def";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}����������������������������������������������������������������
//int strcmp ( const char * str1, const char * str2 );  �ַ����Ƚ�  �Ƚϵ�����Ԫ��ASCLL��ֵ  ��Ԫ����ͬ��Ƚ���һ��Ԫ�� 
//��������Ϊint str1>str2�򷵻�һ������0�����֣�str1<str2�򷵻�һ��С��0�����֣�str1=str2�򷵻�һ������0������
//int main()
//{
//	char arr1[] = "abd";
//	char arr2[] = "abc";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);//1
//	return 0;
//}������������������������������������������������������������
//���strcmp
//int my_strcmp(char* arr1, char* arr2)
//{
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	if (*arr1 > *arr2)
//	{
//		return 1;
//	}
//	if (*arr1 < *arr2)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}��������������������������������������������������������������������
//char * strncpy ( char * destination, const char * source, size_t num );//�ַ�������  ��������Ϊchar*
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "gijk";
//	strcpy(arr1, arr2);//gijk
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "gijk";
//	strncpy(arr1, arr2, 3);  //û������ȥ\0
//	printf("%s\n", arr1);//gijdef  
//	return 0;
//}
//ʵ��strncpy
//#include<assert.h>
//char* my_strcpy(char* arr1, char* arr2, int n)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* ret = arr1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//����
//		if (*arr2 != '\0')
//		{
//			*arr1 = *arr2;
//			arr1++;
//			arr2++;
//		}
//		else
//		{
//			*arr1 = '\0';//����Ĳ�����\0�滻
//			arr1++;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "ghij";
//	my_strcpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}����������������������������������������������������������������
//ģ��ʵ��char * strncat ( char * destination, const char * source, size_t num ); �ַ���׷��
//char* my_strncat(char* arr1, char* arr2, int n)
//{
//	char* ret = arr1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (*arr2 != '\0')
//		{
//			*arr1 = *arr2;
//			arr1++;
//			arr2++;
//		}
//		else
//		{
//			*arr1 = *arr2;//�������  ����\0��ֹͣ
//			break;
//		}
//	}
//	return arr1;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "mnbv";
//	my_strncat(arr1, arr2, 8);
//	printf("%s\n", arr1);
//	return 0;
//}��������������������������������������������������������������������������������
//ģ��ʵ��strstr  char * strstr (       char * str1, const char * str2 );  Ѱ�����ַ������������ַ�����һ��Ԫ�صĵ�ַ �������������ȫ����ӡ
//char* my_strstr(char* arr1, char* arr2)//��һ
//{
//	char* ret1 = arr2;
//	do
//	{//�ҵ���һ����ͬ���ַ�
//		arr2 = ret1;//����arr2
//		while (*arr1 != *arr2)
//		{
//			arr1++;
//		}
//		char* ret = arr1;
//		//���Ƚ�
//		while (*arr2 != '\0')
//		{
//			if (*arr2 == *arr1)
//			{
//				arr2++;
//				arr1++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (*arr2 == '\0')//����;�����ѭ��
//		{
//			return ret;
//		}
//	} while (*arr2 && *arr1);
//	return NULL;//������;�����ѭ��
//}
//int main()
//{
//	char arr1[] = "abcdbce";
//	char arr2[] = "cde";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("arr2����arr1�����ַ���\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}������������������������������������������������������������������������
//ģ��ʵ��strstr ����
//char* my_strstr(char* arr1, char* arr2)
//{
//	if (*arr2 == '\0')
//	{
//		return arr1;
//	}
//	char* s1=arr1;
//	char* s2=arr2;
//	char* cur=arr1;
//	while (*cur)
//	{
//		s1 = cur;//����s1
//		s2 = arr2;//����s2
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdebcde";
//	char arr2[] = "abcd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("arr2����arr1�����ַ���\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}��������������������������������������������������������
