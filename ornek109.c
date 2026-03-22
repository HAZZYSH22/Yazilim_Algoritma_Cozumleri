#include <stdio.h>
#include <string.h>
void sezar(const char *s1, char *s2, int kaydirma) 
{
    int i = 0;
    while (s1[i] != '\0') {
        char karakter = s1[i];
        if (karakter >= 'a' && karakter <= 'z') {
            // Harfi kaydýr ve 'z'yi geçtiyse 'a'dan devam et
            karakter = ((karakter - 'a' + kaydirma) % 26) + 'a';
        }
        s2[i] = karakter; // Þifreli harfi kopyala
        i++;
    }
    s2[i] = '\0'; 
}
int main() 
{
    char s1[] = "red fox";
    char s2[50];
    sezar(s1, s2, 3);
    printf("Sifreli hali:\n%s\n", s2);
}
