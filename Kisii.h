#ifndef KISII_H
#define KISII_H
#include<string>
using namespace std;
class Kisii
{
	public:
		Kisii(string isim);
		int getHaftalikDersYuku();
		void setEposta(string ep);
	protected:
		string isim;
		string eposta;
		int dersProgrami[8][5];
};
#endif
