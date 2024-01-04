#include <stdio.h>
int m,n,i,j,temp,target;
int a[100];

void outp(){
    printf("phan tu trong mang la: ");
    for(int i=0;i<m;i++){
        printf("%d",a[i]);
    }
}

void menu(){
    printf("1. In gia tri cac phan tu cua mang");
    printf("2. Nhập giá trị tìm kiếm và sử dụng thuật toán tìm kiếm tuyến tính tìm tất cả các phần tử trong mảng có giá trị bằng giá trị tìm kiếm");
    printf("3. Nhập giá trị tìm kiếm và sử dụng thuật toán tìm kiếm nhị phân tìm phần tử trong mảng");
    printf("4. Thoát");
}

int linearSearch(int a[], int size, int target) {
    printf("Nhap gia tri tim kiem: ");
    scanf("%d", &target);

    int found = 0;
    printf("Cac phan tu tim duoc (tuyen tinh): ");
    for (int i = 0; i < size; i++) {
        if (a[i] == target) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay gia tri trong mang.\n");
    }

    return found;
}

int binarySearch(int arr[], int size, int target) {
    printf("Nhap gia tri tim kiem (nhi phan): ");
    scanf("%d", &target);

    int left = 0, right = size - 1, found = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            printf("Phan tu tim thay tai vi tri %d.\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Khong tim thay gia tri trong mang.\n");
    }

    return found;
}

int main() {
    printf("nhap so luong phan tu trong mang: ");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        printf("nhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }

    int choice;
    do {
        menu();
        printf("choose: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                outp();
                break;
            case 2:
                linearSearch(a,m,target);
                outp();
                break;
            case 3:
                binarySearch(a,m,target);
                outp();
                break;
            case 4:
                return 0;
                break;

            default: printf("nhap sai lenh roi be");
        }

    }while (choice!=5);
}
