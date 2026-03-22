#ifndef OGRENCII_H
#define OGRENCII_H
#include<string>
using namespace std;
#include "Kisii.h"

class Ogrencii : public Kisii
{
	public:
		Ogrencii(string isim,string numara);
		bool operator==(Ogrencii);
		Ogrencii dahaDolu(Ogrencii);
	protected:
		string numara;
};

#endif
