#include "Kisii.h"
#include<string>
using namespace std;
Kisii::Kisii(string isim)
{
   this->isim = isim;
    for(int i = 0; i < 8; i++){
   	    for(int j = 0; j < 5; j++){
   	  	    dersProgrami[i][j] = 0;
	   }
   }
}
int Kisii::getHaftalikDersYuku()
{
	int toplam = 0;
	for(int i = 0; i < 8; i++){
   	    for(int j = 0; j < 5; j++){
   	  	    if(dersProgrami[i][j] == 1)
   	  	       toplam++;
	   }
   }
   return toplam;
}
void Kisii::setEposta(string ep)
{
	eposta = ep;
}
