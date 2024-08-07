#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include<string.h>
void chuyenDoiChuCai(char* str) {
    int i = 0;
    int dauTuMoi = 1;

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            dauTuMoi = 1;
        }
        else {
            if (dauTuMoi && isalpha(str[i])) {
                str[i] = toupper(str[i]);
                dauTuMoi = 0;
            }
            else {
                str[i] = tolower(str[i]);
            }
        }
        i++;
    }
}
int main() {
    char str[100];
    printf("Moi ban nhap vao chuoi can chuyen doi: ");
    gets_s(str);
    chuyenDoiChuCai(str);
    printf("Chuoi sau khi chuyen doi la: %s\n", str);
    return 0;
}
