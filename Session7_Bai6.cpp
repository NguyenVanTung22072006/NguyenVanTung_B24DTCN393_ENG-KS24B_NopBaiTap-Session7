#include <stdio.h>

int main(){
    int number[5] = {1,2,3,4,5};
    printf("Mang ban dau: ");
    
    for(int i=0; i<5; i++){
        printf("%d", number[i]);
    }

    for(int i=0; i<5; i++){
        if(number[i]%2==0){
            number[i]+=3;
        }else {
            number[i]+=2;
        }
    }
    printf("\nMang sau khi thay doi: ");
    for(int i = 0; i < 5; i++) {
        printf("%d", number[i]);
    }
    return 0;
}
