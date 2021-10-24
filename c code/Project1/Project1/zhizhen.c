#include<stdio.h>

void main(){
	int arr[] = {100,200,300,400};
	int* p = arr;
	*(p +1) = 10;
	for (int i = 0; i < 4; i++) {
		printf("%d \n",arr[i]);
	}

	int (*p)[10];//Ã¿´Î¿ç¹ý10*4
}