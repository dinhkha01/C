# include <stdio.h>
int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            if (j > 3) {
                break;
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
}
