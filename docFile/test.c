#include <stdio.h>
#include <string.h>
#include <ctype.h>

void standardizeName(char *name) {
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
    int numStudents;


    if ((inputFile = fopen("sinhvien.txt", "r")) == NULL) {
        perror("Không thể mở file sinhvien.txt");
        return 1;
    }


    if ((outputFile = fopen("sinhvien_out.txt", "w")) == NULL) {
        perror("Không thể mở file sinhvien_out.txt");
        fclose(inputFile);
        return 1;
    }


    fscanf(inputFile, "%d", &numStudents);


    fprintf(outputFile, "%d\n", numStudents);


    for (int i = 0; i < numStudents; i++) {
        fscanf(inputFile, " %[^\n]s", line);
        standardizeName(line);
        fprintf(outputFile, "%s\n", line);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("da tao file theo yeu cau.\n");

    return 0;
}
