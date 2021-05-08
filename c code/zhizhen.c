//指针 
#include<stdio.h>
#include<stdlib.h>
int main(){
	//定义一个变量
	int i = 0; 
	//定义一个指针
	int *p;
	//将i对应的地址赋值给p
	p = &i;
	//取值  p对应的地址值取出来
	printf("%d",*p); 
	
	system("pause");
}
