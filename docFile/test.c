#include <stdio.h>
#include <string.h>
#include <ctype.h>

void viethoaten(char *name) {
    int i, j = 0;
    int len = strlen(name);
    int newWord = 1;

    for (i = 0; i < len; i++) {
        if (name[i] != ' ') {
            if (newWord) {
                name[j++] = toupper(name[i]);
                newWord = 0;
            } else {
                name[j++] = tolower(name[i]);
            }
        } else if (i + 1 < len && name[i + 1] != ' ') {
            name[j++] = ' ';
            newWord = 1;
        }
    }

    name[j] = '\0';
}

int main(void) {
    FILE *inputFile, *outputFile;
    char line[100];
    int sosv;

    if ((inputFile = fopen("sinhvien.txt", "r")) == NULL) {
        perror("Khong the mo file sinhvien.txt");
        return 1;
    }

    if ((outputFile = fopen("sinhvien_out.txt", "w")) == NULL) {
        perror("Khong the mo file sinhvien_out.txt");
        fclose(inputFile);
        return 1;
    }

    if (fscanf(inputFile, "%d", &sosv) != 1) {
        fprintf(stderr, "Loi doc so sinh vien tu file\n");
        fclose(inputFile);
        fclose(outputFile);
        return 1;
    }

    fprintf(outputFile, "%d\n", sosv);

    for (int i = 0; i < sosv; i++) {
        if (fscanf(inputFile, " %[^\n]s", line) != 1) {
            fprintf(stderr, "Loi doc dong sinh vien thu %d tu file\n", i + 1);
            fclose(inputFile);
            fclose(outputFile);
            return 1;
        }
        viethoaten(line);
        fprintf(outputFile, "%s\n", line);
    }

    if (fclose(inputFile) == EOF) {
        perror("Loi khi dong file dau vào");
        return 1;
    }

    if (fclose(outputFile) == EOF) {
        perror("Loi khi dong file đau ra");
        return 1;
    }

    printf("Da tao file theo yeu cau.\n");

    return 0;
}
