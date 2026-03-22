#include "Ogrencii.h"
#include<string>
using namespace std;
Ogrencii::Ogrencii(string isim,string numara):Kisii(isim)
{
	this->numara = numara;
	setEposta(numara + "@mail.baskent.edu.tr");
}
bool Ogrencii::operator==(Ogrencii b)
{
	for(int i = 0; i < 8; i++){
   	    for(int j = 0; j < 5; j++){
   	  	    if(dersProgrami[i][j] != b.dersProgrami[i][j])
   	  	       return false;
	   }
    }
    return true;
}
Ogrencii Ogrencii::dahaDolu(Ogrencii b)
{
	if(getHaftalikDersYuku() > b.getHaftalikDersYuku())
	   return *this;
	else if(getHaftalikDersYuku() < b.getHaftalikDersYuku())
	   return b;
	else 
	   return b;
}
