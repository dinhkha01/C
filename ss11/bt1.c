#include<stdio.h>
int a[100];
int m,n,temp,j,min;
void menu(){
    printf("1. In gia tri cac phan tu cua mang");
    printf("2. Su dung Insertion Sort sap xep mang giam dan và in ra");
    printf("3. Su dung Selection Sort sap xep mang tang dan va in ra");
    printf("4. Su dung Bubble Sort sap xep mang giam dan va in ra");
    printf("5. Thoat");
}

void outp(){
    printf("phan tu trong mang la: ");
    for(int i=0;i<m;i++){
        printf("%d",a[i]);
    }
}

void insertionSort(){
    for (int i=1;i<m;i++){
        j=i-1;
        temp=a[i];
        while(temp>a[j]&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

void selectionSort(){
    for(int i=1;i<m-1;i++){
        min=i;
        for(j=i+1;j<m;j++){
            if (a[j]<a[min])
                min=j;
        }
        if (min!=i){
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
}

void bubbleSort(){
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=m-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
}

int main()
{
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
            insertionSort();
            outp();
            break;
        case 3:
            selectionSort();
            outp();
            break;
        case 4:
            bubbleSort();
            break;
        case 5:
            return 0;
        default: printf("nhap sai lenh roi be");
    }

    }while (choice!=5);
}