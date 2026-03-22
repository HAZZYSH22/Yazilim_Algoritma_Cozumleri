#include <stdio.h>
#include <ctype.h>
#include <string.h>
int hesapla(char *cumle, int *harfSayisi) 
{
    int harfler[26] = {0};
    int pangramMi = 1;
    *harfSayisi = 0;
    int i;
    for(i = 0; cumle[i] != '\0'; i++) {
        char karakter = tolower(cumle[i]);
        if (karakter >= 'a' && karakter <= 'z') {
            if (harfler[karakter - 'a'] == 0) {
                (*harfSayisi)++;
                harfler[karakter - 'a'] = 1;
            }
        }
    }
    for(i = 0; i < 26; i++) {
        if (harfler[i] == 0) {
            pangramMi = 0;
            break;
        }
    }
    return pangramMi;
}
int main() 
{
    char cumle[256];
    int harfSayisi;
    printf("Ingilizce bir cumle giriniz:\n");
    fgets(cumle, 256, stdin);
    if (cumle[len - 1] == '\n') {
        cumle[len - 1] = '\0';
    }
   if(hesapla(cumle, &harfSayisi)) {
        printf("Bu cumle bir pangramdir\n");
    } else {
        printf("Bu cumle bir pangram degildir\n");
    }
    printf("Cumle icindeki alfabenin harf sayisi = %d\n", harfSayisi);
}
