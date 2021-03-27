#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//实现strlen(给定一个初始位置，从该位置开始计数，直到遇到\0)函数
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
//	if ((strlen("abc") - strlen("abcde"))>0)//因为strlen返回值为size_t,即unsigned int
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");//结果为hehe
//	}
//	return 0;
//}————————————————————————————————————————
//实现strcpy(字符串拷贝，包括\0)
//#include<assert.h>
//void my_strcpy(char* arr1,char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	while (*arr1 && *arr2)//这样可以保证如果arr1中字符小于arr2 值复制arr1中可以存下的值
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
//}——————————————————————————————————————————
//优化
//#include<assert.h>
//char* my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1!=NULL);
//	assert(arr2!=NULL);
//	char* ret = arr1;
//	while (*arr1++ = *arr2++)//这样如果arr1中字符小于arr2 的值 则会溢出
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
//	strcat(a1, a2);//char * strcat ( char * destination, const char * source ); 返回值为char*
//	printf("%s\n", a1);//从a1的\0开始追加，到a2的\0结束，包括\0
//	return 0;
//}————————————————————————————
//实现strcat
//char* my_strcat(char* arr1, char* arr2)
//{
//	//找到arr1中的\0
//	char* ret = arr1;
//	while (*arr1++)
//	{
//		;
//	}
//	*arr1--;//上方遇到\0后仍会++一次
/*
或将代码变为
while(*arr1!='\0')
{
	arr1++;
}
就不用加arr1-- 了
*/
//	//开始追加
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
//}————————————————————————————————
//int strcmp ( const char * str1, const char * str2 );  字符串比较  比较的是首元素ASCLL码值  首元素相同则比较下一个元素 
//返回类型为int str1>str2则返回一个大于0的数字，str1<str2则返回一个小于0的数字，str1=str2则返回一个等于0的数字
//int main()
//{
//	char arr1[] = "abd";
//	char arr2[] = "abc";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);//1
//	return 0;
//}——————————————————————————————
//设计strcmp
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
//}——————————————————————————————————
//char * strncpy ( char * destination, const char * source, size_t num );//字符串拷贝  返回类型为char*
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
//	strncpy(arr1, arr2, 3);  //没拷贝过去\0
//	printf("%s\n", arr1);//gijdef  
//	return 0;
//}
//实现strncpy
//#include<assert.h>
//char* my_strcpy(char* arr1, char* arr2, int n)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* ret = arr1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//复制
//		if (*arr2 != '\0')
//		{
//			*arr1 = *arr2;
//			arr1++;
//			arr2++;
//		}
//		else
//		{
//			*arr1 = '\0';//多出的部分用\0替换
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
//}————————————————————————————————
//模拟实现char * strncat ( char * destination, const char * source, size_t num ); 字符串追加
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
//			*arr1 = *arr2;//如果超出  则补完\0后停止
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
//}————————————————————————————————————————
//模拟实现strstr  char * strstr (       char * str1, const char * str2 );  寻找子字符串，返回子字符串第一个元素的地址 并将后面的内容全部打印
//char* my_strstr(char* arr1, char* arr2)//法一
//{
//	char* ret1 = arr2;
//	do
//	{//找到第一个相同的字符
//		arr2 = ret1;//重置arr2
//		while (*arr1 != *arr2)
//		{
//			arr1++;
//		}
//		char* ret = arr1;
//		//向后比较
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
//		if (*arr2 == '\0')//正常途径完成循环
//		{
//			return ret;
//		}
//	} while (*arr2 && *arr1);
//	return NULL;//非正常途径完成循环
//}
//int main()
//{
//	char arr1[] = "abcdbce";
//	char arr2[] = "cde";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("arr2不是arr1的子字符串\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}————————————————————————————————————
//模拟实现strstr 法二
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
//		s1 = cur;//重置s1
//		s2 = arr2;//重置s2
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
//		printf("arr2不是arr1的子字符串\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}————————————————————————————
