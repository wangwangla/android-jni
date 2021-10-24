#include<stdio.h>
#include<string.h>

#define PI 3.14159

void test() {
	static int num = 0;
	num++;
	printf("%d",num);
}
void main1() {
//	printf("%s","hello wrold c \n");
	//字符串长度
	//printf("%d", strlen("hello wrold c \n"));
	////数据类型
	//char c;   //1  
	//short s;  //2
	//int i;    //4
	//float f;  //4
	//double d; //8
	//long l;	  //4
	//long long ll; //8
	////每种数据类型的长度
	//printf("%d\n",sizeof(c));
	//printf("%d\n", sizeof(s));
	//printf("%d\n", sizeof(i));
	//printf("%d\n", sizeof(f));
	//printf("%d\n", sizeof(d));
	//printf("%d\n", sizeof(l));
	//printf("%d\n", sizeof(ll));

	//int i = 9;
	//我确实忘记写了,但是 运行没报错
	//const xx = 0;
	//const int  ci = 10;
	//printf("%d", i);
	//printf("%d",xx);
	//printf("%d",ci);
	//printf("%f",PI);

	//int arr[10];
	//int arr2[ci];x

	for (int i = 0; i < 10; i++) {
		test();
	}
}