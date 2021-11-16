  #include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//if
//指针比较 
void demo(){
	int *p = NULL;
//	*p = NULL;
	
//	int *p = NULL;
	if(p!=NULL){
		*p = 20;
		printf("*p is not null");
	}else{
		printf("*p = ");
	
	}
} 
// -------------------------------
void str(){
	char *p = "Hello""nn";
	printf("xxxx","xxxx"); //xxx 
	printf("xxxx""xxxx"); //xxxxxxx 
	printf("%s",p); //输出的竟然是Hellonn 
} 
int main() {
	str();
//	demo();
// 使用外部函数 
//	extern void prin();
//	printf("xxxx");
//	prin();
	return 0;
}
