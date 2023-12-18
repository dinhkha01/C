#include <stdio.h>

// Hàm đổi chỗ giá trị của hai phần tử
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng giảm dần bằng thuật toán nổi bọt
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Hàm kiểm tra số nguyên tố
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;

    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập giá trị cho từng phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // In giá trị các phần tử trong mảng
    printf("\nMang vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Tính trung bình các phần tử dương trong mảng
    int sumPositive = 0, countPositive = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sumPositive += arr[i];
            countPositive++;
        }
    }

    if (countPositive > 0) {
        float averagePositive = (float)sumPositive / countPositive;
        printf("\nTrung binh cac phan tu duong trong mang: %.2f\n", averagePositive);
    } else {
        printf("\nKhong co phan tu duong trong mang\n");
    }

    // Tìm vị trí các phần tử có giá trị bằng k
    int k;
    printf("\nNhap gia tri k can tim: ");
    scanf("%d", &k);

    printf("Vi tri cua cac phan tu co gia tri bang %d la:\n", k);
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Sắp xếp mảng giảm dần
    bubbleSort(arr, n);

    printf("\nMang sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Đếm số lượng số nguyên tố trong mảng
    int countPrime = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            countPrime++;
        }
    }

    printf("\nSo luong phan tu la so nguyen to trong mang: %d\n", countPrime);

    // Sắp xếp theo yêu cầu
    int evenDivisibleBy3, oddDivisibleBy3, other;
    evenDivisibleBy3 = oddDivisibleBy3 = other = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0) {
            evenDivisibleBy3++;
        } else if (arr[i] % 2 != 0 && arr[i] % 3 == 0) {
            oddDivisibleBy3++;
        } else {
            other++;
        }
    }

    int sortedArr[n];
    int index = 0;

    // Sắp xếp các phần tử chẵn chia hết cho 3
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0) {
            sortedArr[index++] = arr[i];
        }
    }

    // Sắp xếp các phần tử lẻ chia hết cho 3
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0 && arr[i] % 3 == 0) {
            sortedArr[index++] = arr[i];
        }
    }

    // Sắp xếp các phần tử còn lại
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 || arr[i] % 3 != 0) {
            sortedArr[index++] = arr[i];
        }
    }

    // In mảng sau khi sắp xếp
    printf("\nMang sau khi sap xep theo yeu cau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sortedArr[i]);
    }
    printf("\n");

    // Nhập giá trị m và chèn vào mảng
    int m;
    printf("\nNhap gia tri m can chen: ");
    scanf("%d", &m);

    // Chèn giá trị m vào mảng đã sắp xếp giảm dần
    int inserted = 0;
    for (int i = 0; i < n; i++) {
        if (m >= sortedArr[i]) {
            for (int j = n - 1; j > i; j--) {
                sortedArr[j] = sortedArr[j - 1];
            }
            sortedArr[i] = m;
            inserted = 1;
            break;
        }
    }

    if (!inserted) {
        sortedArr[n] = m;
    }

    // In mảng sau khi chèn
    printf("\nMang sau khi chen gia tri m:\n");

    }

