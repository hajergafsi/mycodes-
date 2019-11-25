//Dışarıdan devamlı olarak girilen sayıları toplayan bir C++ programı yazınız.Dışarıdan girilen sayı tek olduğunda toplama
//işlemi bitmeli ve sonuç ekrana yazılmalıdır.

#include<iostream> 
#include<math.h> 

using namespace std;
int cift(int);
int main() {
	int toplam = 0, n=0;
	
	while(cift(n))
	{
		cout << "bir sayi giriniz ..."; 
	    cin >> n;
		toplam = toplam + n;
	}
	cout << toplam ;
}
int cift(int sayi) {
	int sonuc;
	if (sayi % 2 == 0)
		sonuc = 1;
	else sonuc = 0;
	return sonuc;
}