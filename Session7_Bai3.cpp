#include <stdio.h>

int main(){
	int arr[5]={5,4,7,8,6};
	int count=0;
	for(int i=0; i<5; i++){
		if(arr[i]%2==0){
			printf("%d la so chan\n", arr[i]);
			count++;
		}
	}
	if(count==0){
		printf("Khong co so chan");
	}
	return 0;
}
