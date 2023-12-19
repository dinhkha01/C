#include <stdio.h>

#define MAX 10

void printMatrix(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void sortSecondaryDiagonal(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (matrix[j][j + 1] > matrix[j + 1][j]) {
                int temp = matrix[j][j + 1];
                matrix[j][j + 1] = matrix[j + 1][j];
                matrix[j + 1][j] = temp;
            }
        }
    }
}

void insertIntoMatrix(int matrix[MAX][MAX], int arr[MAX], int n, int column_index) {
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > column_index; j--) {
            matrix[i][j] = matrix[i][j - 1];
        }
        matrix[i][column_index] = arr[i];
    }
}

int main() {
    int matrix[MAX][MAX];
    int arr[MAX];
    int n; // Kích thước của ma trận

    // Nhập kích thước của ma trận
    printf("Nhập kích thước của ma trận (n): ");
    scanf("%d", &n);

    // Nhập ma trận từ bàn phím
    printf("Nhập ma trận %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhập phần tử matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int choice;
    while (1) {
        printf("\n1. Sắp xếp đường chéo phụ của ma trận\n");
        printf("2. Chèn mảng vào ma trận 2 chiều\n");
        printf("3. Thoát\n");
        printf("Nhập lựa chọn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sortSecondaryDiagonal(matrix, n);
                printf("Kết quả sau khi sắp xếp đường chéo phụ:\n");
                printMatrix(matrix, n);
                break;
            case 2:
                printf("Nhập mảng cần chèn (kích thước %d): ", n);
                for (int i = 0; i < n; i++) {
                    printf("Nhập phần tử arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                int column_index;
                printf("Nhập chỉ số cột cần chèn: ");
                scanf("%d", &column_index);
                insertIntoMatrix(matrix, arr, n, column_index);
                printf("Kết quả sau khi chèn mảng vào ma trận 2 chiều:\n");
                printMatrix(matrix, n);
                break;
            case 3:
                printf("Thoát chương trình.\n");
                return 0;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng nhập lại.\n");
        }
    }

    return 0;
}
