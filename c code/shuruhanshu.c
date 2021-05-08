//输入函数
#include<stdio.h>
#include<stdlib.h>
int main(){
	int s;
	//输入函数 
	scanf("%d",&s);
	
	//输出打印数组
	char charArray[] = {'H','E','L','L','O'};
	int j ;
	for(j=0;j<5;j++){
		printf("chararray[%d] == %c\n",j,charArray[j]);
	}

	//输出字符串
	printf("%s",charArray); 
	system("pause");
	return 0;
} 
