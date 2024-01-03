#include <stdio.h>
#include <string.h>

struct Contact {
    int id;
    char name[50];
    char phone[12];
    char address[50];
    int status;
};

void bubbleSort(struct Contact contactList[], int n) {
    int i, j;
    struct Contact temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (contactList[j].id > contactList[j + 1].id) {
                temp = contactList[j];
                contactList[j] = contactList[j + 1];
                contactList[j + 1] = temp;
            }
        }
    }
}

void printContacts(struct Contact contactList[], int n) {
    printf("Danh sach lien he:\n");
    printf("ID\tName\tPhone\tAddress\tStatus\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%s\t%s\t%d\n", contactList[i].id, contactList[i].name, contactList[i].phone, contactList[i].address, contactList[i].status);
    }
}

int main() {
    struct Contact contactList[100];
    int n, i, found = 0;
    int timTrangThai;
    char timTen[50];

    printf("Nhap so danh sach contact: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nhap chi tiet danh sach thu %d \n", i + 1);
        printf("Nhap ID : ");
        scanf("%d", &contactList[i].id);

        printf("Nhap ten lien he: ");
        getchar();
        fgets(contactList[i].name, sizeof(contactList[i].name), stdin);
        contactList[i].name[strcspn(contactList[i].name, "\n")] = '\0'; // Loại bỏ ký tự '\n'

        printf("Nhap dien thoai : ");
        scanf("%s", contactList[i].phone);

        printf("Nhap dia chi: ");
        scanf("%s", contactList[i].address);

        printf("Nhap trang thai : ");
        scanf("%d", &contactList[i].status);
    }

    int choice;
    do {
        printf("\n************************MENU**************************\n");
        printf("1. In danh sach lien he\n");
        printf("2. Cap nhat lien he\n");
        printf("3. Xoa lien he\n");
        printf("4. Tim kiem theo ten\n");
        printf("5. Tim kiem theo trang thai\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printContacts(contactList, n);
                break;
            case 2:
                printf("Nhap ten lien he muon cap nhat: ");
                getchar();
                fgets(timTen, sizeof(timTen), stdin);
                timTen[strcspn(timTen, "\n")] = '\0'; // Loại bỏ ký tự '\n'

                for (i = 0; i < n; i++) {
                    if (strcmp(contactList[i].name, timTen) == 0) {
                        printf("Nhap thong tin moi cho lien he:\n");
                        printf("Nhap ID : ");
                        scanf("%d", &contactList[i].id);

                        printf("Nhap ten lien he: ");
                        getchar();
                        fgets(contactList[i].name, sizeof(contactList[i].name), stdin);
                        contactList[i].name[strcspn(contactList[i].name, "\n")] = '\0'; // Loại bỏ ký tự '\n'

                        printf("Nhap dien thoai : ");
                        scanf("%s", contactList[i].phone);

                        printf("Nhap dia chi: ");
                        scanf("%s", contactList[i].address);

                        printf("Nhap trang thai : ");
                        scanf("%d", &contactList[i].status);

                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Khong tim thay lien he.\n");
                } else {
                    printf("Lien he da duoc cap nhat.\n");
                }
                break;
            case 3:
                printf("Nhap ten lien he muon xoa: ");
                getchar();
                fgets(timTen, sizeof(timTen), stdin);
                timTen[strcspn(timTen, "\n")] = '\0'; // Loại bỏ ký tự '\n'

                for (i = 0; i < n; i++) {
                    if (strcmp(contactList[i].name, timTen) == 0) {
                        found = 1;
                        for (int j = i; j < n - 1; j++) {
                            contactList[j] = contactList[j + 1];
                        }
                        n--;
                        break;
                    }
                }

                if (!found) {
                    printf("Khong tim thay lien he.\n");
                } else {
                    printf("Lien he da bi xoa.\n");
                }
                break;
            case 4:
                bubbleSort(contactList, n);
                printf("Nhap ten lien he can tim kiem: ");
                getchar();
                fgets(timTen, sizeof(timTen), stdin);
                timTen[strcspn(timTen, "\n")] = '\0'; // Loại bỏ ký tự '\n'

                int left = 0, right = n - 1, mid;
                found = 0;

                while (left <= right) {
                    mid = (left + right) / 2;
                    if (strcmp(contactList[mid].name, timTen) == 0) {
                        found = 1;
                        printf("%d\t%s\t%s\t%s\t%d\n", contactList[mid].id, contactList[mid].name, contactList[mid].phone, contactList[mid].address, contactList[mid].status);
                        break;
                    } else if (strcmp(contactList[mid].name, timTen) < 0) {
                        left = mid + 1;
                    } else {
                        right = mid - 1;
                    }
                }

                if (!found) {
                    printf("Khong tim thay lien he.\n");
                }
                break;
            case 5:
                printf("Nhap trang thai muon tim kiem: ");
                scanf("%d", &timTrangThai);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (contactList[i].status == timTrangThai) {
                        found = 1;
                        printf("%d\t%s\t%s\t%s\t%d\n", contactList[i].id, contactList[i].name, contactList[i].phone, contactList[i].address, contactList[i].status);
                    }
                }

                if (!found) {
                    printf("Khong tim thay lien he.\n");
                }
                break;
            case 0:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
