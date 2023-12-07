#include <stdio.h>
int main () {
    int year,month;
    printf("nhap vao nam va thang:   ");
    scanf ("%d%d",&year,&month);
    switch (month) {
    case 1 : case 3: case 5: case 7: case 8: case 10: case 12:
        printf ( " thang %d la thang co 31 day\n",month);
            break;
        case 4: case 6: case 9: case 11:
            printf("thang %d la thang co 30 day\n",month);
            break;
        case 2:
            if ((year % 4 == 0) && (year % 100!= 0) || (year%400 == 0))
                printf("thang %d la thang co 29 day ", month);
            else
                printf("thang %d la thang co 28 day ", month);
    }
    return 0;

}