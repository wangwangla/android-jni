#include<stdio.h>
/**
���飺
1.һά���鴴����
type_t arr[num]
2.����ĳ�ʼֵ
int arr1[10] = {1,2,3}; 
int aa[] = {1,2,3,5};
3.��ͬ��ʼ��ʽ�����ͬ
char []arr = "abc";
//a b c \0
char [3]aa = {'a','b','c'};
//a b c
char *p = "abcd";
//"abcd"
 
 
һά�����ʹ��

ʹ�õĴ�С���㣺
sizeof(arr)/sizeof(arr[0])

����ĵ�ַ�Ǵӵ͵��ߵ�

ָ��ĳ������ܣ�
 
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
