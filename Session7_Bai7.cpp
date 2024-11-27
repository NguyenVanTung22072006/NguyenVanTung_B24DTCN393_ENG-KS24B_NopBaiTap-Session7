#include <stdio.h>

int main(){
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n]; 
    for(int i=0; i<n; i++){
        int number;
        do{
            printf("Nhap phan tu so le %d: ", i+1);
            scanf("%d", &number);
            if (number%2==0){
                printf("Khong phai so le\n");
            }
        } while (number%2==0); 
        arr[i] = number;  
    }
    printf("So phan tu le cua mang: ");
    for (int i=0;i<n; i++) {
        printf("%d ", arr[i]); 
    }

    return 0; 
    
}
