#include<stdio.h>
/**
数组：
1.一维数组创建：
type_t arr[num]
2.数组的初始值
int arr1[10] = {1,2,3}; 
int aa[] = {1,2,3,5};
3.不同初始方式结果不同
char []arr = "abc";
//a b c \0
char [3]aa = {'a','b','c'};
//a b c
char *p = "abcd";
//"abcd"
 
 
一维数组的使用

使用的大小计算：
sizeof(arr)/sizeof(arr[0])

数组的地址是从低到高的

指针的初步介绍：
 
*/
int main(){
	int arr[20];
	int a =  0; 
	int b [a];
	int tat[] = {
		1,1,2,4
	}; 
	printf("%p\n",tat+1);
	printf("%d\n",*tat);

	return 0;
} 
