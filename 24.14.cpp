#include<iostream>
#include "Takim.h"
using namespace std;
int main()
{
	Takim a("Bursaspor");
	Takim b("Trabzonspor"),c("buyuk");
	a.macEkle(1,0);
	b.macEkle(3,1);
	a.macEkle(4,6);
	cout<<"Bursaspor hakkinda bilgi:"<<endl;
	a.bilgiVer();
	cout<<"\nTrabzonspor'un attigi gol toplami:"<<b.getA()<<endl;
    cout<<"Bursasporun gol ortalamasi:"<<a.getMG()<<endl;
    if(a.ayniMi(b))
       cout<<"Sayisal bilgiler esit"<<endl;
    else
       cout<<"Sayisal bilgiler farkli"<<endl;
    c = a.iyiOlaniBul(b);
    cout<<"Daha iyi olan:"<<endl;
    c.bilgiVer();
}
