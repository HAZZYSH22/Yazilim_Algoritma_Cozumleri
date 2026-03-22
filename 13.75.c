#include<stdio.h>
#include<string.h>
#include<ctype.h> 
void hesapla(char *mesaj, int *toplamHarf, int *hatalar) 
{
    *toplamHarf = 0;
    *hatalar = 0;
    int i;
    for (i = 0; mesaj[i] != '\0'; i++) {
        if (isspace(mesaj[i])) {
            continue;
        }
        if (mesaj[i + 2] != '\n' && mesaj[i + 2] != '\0') { 
            if (mesaj[i] == mesaj[i + 1] && mesaj[i] == mesaj[i + 2]) {
                (*toplamHarf)++; 
                i += 2; 
            } else {
                (*hatalar)++;
                (*toplamHarf)++; 
                i += 2; 
            }
        }
    }
}
int main() 
{
    char mesaj[256];
    int toplamHarf, hatalar;
    printf("Hastanin cumlesini giriniz:\n");
    fgets(mesaj, sizeof(mesaj), stdin);
    int len = strlen(mesaj);
    if (mesaj[len - 1] == '\n') {
        mesaj[len - 1] = '\0'; 
    }
    hesapla(mesaj, &toplamHarf, &hatalar);
    printf("------------------------------\n");
    printf("Bu cumlede toplam %d harf bulunmaktadir.\n",toplamHarf);
    printf("Hasta %d harfte hata yapmistir.\n",hatalar);
}
