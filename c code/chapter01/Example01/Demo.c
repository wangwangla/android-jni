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
	
//	֧�ֵ���������
//char short int float double long  longlong
	printf("char  %d",sizeof(char)); //1
	printf("int   %d",sizeof(int)); //4
	printf("short  %d",sizeof(short));//2
	printf("float  %d",sizeof(float));//4
	printf("double %d",sizeof(double));//8
	printf("long  %d",sizeof(long)); //4
	printf("ll %d",sizeof(long long)); //16


	const int aa = 0;
	//��������������ֵ 
	//aa = 3;
	
	int arr[10];
	int bb[aa];
	
	
	//ԭ��3 * ������ĸ������� 
	int z = 3 * PI;
	printf("%d",z);
	
	// 
	printf("%d",K);
	
	
// ȫ�ֱ����Ͳ�˵�ˣ���֪����ɶ����˵��

// ��̬����


// ����
// �Ӽ��˳�  +-x/%  
// % ����������
//�����ƶ�   ���ƶ� �������  �ұ߼�0
/**
���ƶ���Ϊ���֣��߼�������
�߼��������0  �ұ�����
���������ʹ��ԭֵ  �ұ�����
��Ϊ�������ƶ�����λ 
 */ 

/**
λ����:
& |  ^ 
*/ 

/*
���ϸ�ֵ
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
��Ŀ�����
��
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
