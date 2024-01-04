#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
typedef struct {
    char name[MAX];
    char lop[MAX];
    char ngaySinh[MAX];
    float gpa;
} SinhVien;
int compare(const void *a, const void *b) {
    SinhVien *svA = (SinhVien *)a;
    SinhVien *svB = (SinhVien *)b;

    if (fabs(svB->gpa - svA->gpa) < 0) {
        return 0;
    } else if (svB->gpa - svA->gpa > 0) {
        return 1;
    } else {
        return -1;
    }
}
int main() {
    FILE *In, *Out;
    SinhVien sv[MAX];
    int n = 0;
    In = fopen("sinhvien.txt", "r");
    if (In == NULL) {
        printf("Khong the mo file sinhvien.txt\n");
        return 1;
    }
    while (fscanf(In, " %[^,], %[^,], %[^,], %f", sv[n].name, sv[n].lop, sv[n].ngaySinh, &sv[n].gpa) != EOF) {
        n++;
    }
    qsort(sv, n, sizeof(SinhVien), compare);
    Out = fopen("sinhvien_out.txt", "w");
    if (Out == NULL) {
        printf("Khong the mo file sinhvien_out.txt\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        fprintf(Out, "%s,%s,%s,%.2f\n", sv[i].name, sv[i].lop, sv[i].ngaySinh, sv[i].gpa);
    }
    fclose(In);
    fclose(Out);
    return 0;
}
