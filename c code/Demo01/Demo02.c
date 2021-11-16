#include<stdio.h>
//hello world 
void helloworld(){
	printf("xxxxxx\n");
} 
//xxxxxx
// ---------------------------

//str
void showStr(){
	char cha[] = "test.\n";
	printf("%s",cha);
} 

//test.
// -------------------------

//转义 
void zhuanyi1(){
	printf("(are you ok ??)\n");
} 
void zhuanyi2(){
	printf("(are you ok \??)\n");
} 


//(are you ok ??)
//(are you ok ??)
// ----------------------------

// 基本数据类型
void size(){
	printf("char size:%d\n",sizeof(char));
	printf("int size:%d\n",sizeof(int));
	printf("short size:%d\n",sizeof(short));
	printf("long size:%d\n",sizeof(long));
	printf("float size:%d\n",sizeof(float));
	printf("double size:%d\n",sizeof(double));
	printf("long double size:%d\n",sizeof(long double));
	printf("long long size:%d\n",sizeof(long long));
//	char size:1
	//int size:4
	//short size:2
	//long size:4
	//float size:4
	//double size:8
	//long double size:16  对齐？？ 
	//long long size:
}
// ---------------------

//常量
void changliang() {
	int a = 0;
	printf("%d\n",a);
	a = 10;
	printf("%d\n",a);
 	const int b = 0;
 	printf("%d",b);
// 	b = 10; //read-only 
	int xx[a];
	int aa [b] ;//竟然可以，和版本有关？ 
}


// -----------------
// define声明变量
#define PIA 3 
void defi(){
	int d =  PIA * 10;
	printf("%d",d);
} 
// -------------

// 枚举
enum Sex{
	MAL,
	NES
}; 

void useEnum(){
	printf("%d\n",MAL); //0
	printf("%d\n",NES); //1
	
}
int main(){
	useEnum();
//	defi();
//	changliang();
//	helloworld();
//	showStr();
//	zhuanyi1();
//	zhuanyi2(); 
//	size();
	return 0;
}

