  #include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//if
//ָ��Ƚ� 
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
	printf("%s",p); //����ľ�Ȼ��Hellonn 
} 
int main() {
	str();
//	demo();
// ʹ���ⲿ���� 
//	extern void prin();
//	printf("xxxx");
//	prin();
	return 0;
}
