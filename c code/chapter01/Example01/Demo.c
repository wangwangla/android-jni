#include<stdio.h>

#define PI 3.14

void res(int arr[]){
	printf("%d",sizeof(arr));
}

enum{
	K,
	W,
	Z
};
int main(){
	printf("hello world!!");
	printf("%d",10);
	printf("(Are you ok ??)\n");
	
	printf("%d",strlen("abc"));
	printf("%d",strlen("a\tbc\n"));
	
//	支持的数据类型
//char short int float double long  longlong
	printf("char  %d",sizeof(char)); //1
	printf("int   %d",sizeof(int)); //4
	printf("short  %d",sizeof(short));//2
	printf("float  %d",sizeof(float));//4
	printf("double %d",sizeof(double));//8
	printf("long  %d",sizeof(long)); //4
	printf("ll %d",sizeof(long long)); //16


	const int aa = 0;
	//常量不可以设置值 
	//aa = 3;
	
	int arr[10];
	int bb[aa];
	
	
	//原理：3 * 将上面的复制下来 
	int z = 3 * PI;
	printf("%d",z);
	
	// 
	printf("%d",K);
	
	
// 全局变量就不说了，不知道有啥可以说的

// 静态变量


// 算术
// 加减乘除  +-x/%  
// % 必须是整数
//左右移动   左移动 抛弃左边  右边加0
/**
右移动分为两种：逻辑和算术
逻辑：左边用0  右边抛弃
算术：左边使用原值  右边抛弃
以为不可以移动负数位 
 */ 

/**
位操作:
& |  ^ 
*/ 

/*
符合赋值
+=
-=
*=
/=
%=
>>=
<<=
&=
|=
=
*/ 

/**
单目运算符
！
- 
+
&
sizeof
~
--
++
* 
*/
	int a = 10;
	printf("%d",sizeof (int));
	printf("%d\n",sizeof (a));
	
	int azr[10];
	printf("%d",sizeof(azr));
	   
	res(azr);
	return 0;
}
