//���뺯��
#include<stdio.h>
#include<stdlib.h>
int main(){
	int s;
	//���뺯�� 
	scanf("%d",&s);
	
	//�����ӡ����
	char charArray[] = {'H','E','L','L','O'};
	int j ;
	for(j=0;j<5;j++){
		printf("chararray[%d] == %c\n",j,charArray[j]);
	}

	//����ַ���
	printf("%s",charArray); 
	system("pause");
	return 0;
} 
