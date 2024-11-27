#include <stdio.h>

int main(){
	int number[5]={5,4,7,8,6};
	
	printf("Cac phan tu trong mang la: \n");
	for(int i=0; i<sizeof(number)/sizeof(int); i++){
		printf("\n number[%d]= %d", i, number[i]);
	}
	printf("\nDo dai cua mang la: %d", sizeof(number)/sizeof(int));
	return 0;
}
