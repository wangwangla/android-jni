#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//if
void demo(){
//	int *p;
//	*p = 20;
	
	int *p = NULL;
	if(p!=NULL){
		printf("*p is not null");
	}else{
		*p = 20;
		printf("*p = 20");
	
	}
} 
// -------------------------------
int main() {
	demo();
	printf("xxxxx");
	return 0;
}
