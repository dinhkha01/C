#include <stdio.h>
int songuyentola(int n){
    if(n<=1){
        return 0;
    }
    for (int i =2; i*i <= n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    // Add your code in here:
    int a, b;
    printf("nhap vao gia tri a :");
    scanf("%d",&a);
    printf("nhap vao gia tri b :");
    scanf("%d",&b);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    // Write your output here:
    for (int i=a+1; i<b ; i++){
        if(songuyentola(i)){
            printf("  %d  ",i);
        }
    }
    return 0;
}