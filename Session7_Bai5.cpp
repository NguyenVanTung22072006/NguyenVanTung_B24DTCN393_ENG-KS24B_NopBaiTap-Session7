#include <stdio.h>

int main(){
    int number[5] = {5,4,7,8,6};
    int lonnhat = number[0];
    int nhonhat = number[0];
    
    for (int i=1; i<5; i++){
        if (number[i]>lonnhat){
            lonnhat=number[i];
        }
        if (number[i] < nhonhat) {
            nhonhat = number[i];
        }
    }
    printf("Phan tu lon nhat: %d\n", lonnhat);
    printf("Phan tu nho nhat: %d\n", nhonhat);

    return 0;
}
