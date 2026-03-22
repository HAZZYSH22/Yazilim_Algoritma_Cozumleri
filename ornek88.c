#include <stdio.h>
#include <ctype.h>
#include <string.h>
void strstrip(char *str, int mod) 
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        char karakter = str[i];
        if ((mod == 1 && strchr("aeiouAEIOU", karakter)) || 
            (mod == 2 && isalpha(karakter) && !strchr("aeiouAEIOU", karakter)) || 
            (mod == 3 && isdigit(karakter))) {
            continue;
        }
        str[j++] = karakter;
    }
    str[j] = '\0';
}
int main() 
{
    char sample1[] = "This is a 1. test";
    char sample2[] = "This is a 2. test";
    char sample3[] = "This is a 3. test";
    strstrip(sample1, 1);
    printf("%s\n", sample1);
    strstrip(sample2, 2);
    printf("%s\n", sample2);
    strstrip(sample3, 3);
    printf("%s\n", sample3);
}
