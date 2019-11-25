#include<iostream> 
#include<iomanip> 
using namespace std;

struct calisan {
	char ad[100];
	char soyad[100];
	int maas;
	int yas;
};
calisan bilgiGir();
calisan bilgigir() {
	calisan insan;
	cout << "calisanin adini giriniz " << endl;
	cin >> insan.ad;
	cout << "calisanin soyadini giriniz " << endl;
	cin >> insan.soyad;
	cout << "calisanin maasini giriniz " << endl;
	cin >> insan.maas;
	cout << "calisanin yasini giriniz " << endl;
	cin >> insan.yas;
	return insan;
}
int main() {
	int N;
	cout << "calisanlarin sayisini giriniz " << endl;
	cin >> N;
	calisan dizi[100];
	for (int i = 0; i < N; i++) {
		dizi[i] = bilgiGir();
	}
	int kategori1 = 0, kategori2 = 0, kategori3 = 0;
	for (int i = 0; i < N; i++) {
		if ((dizi[i].yas >= 20) && (dizi[i].yas < 25)) {
			if (dizi[i].maas < 1500)
				kategori1++;
			else if ((dizi[i].maas >= 1500) && (dizi[i].maas < 2000))
				kategori2++;
			else if (dizi[i].maas > 2000)
				kategori3++;
		}
	}
	cout << endl << " yaslari 20 ile 25 arasindaki olanlarin maaslari " << endl;
	cout << " < 1500 " << setw(5) << "1500 ile 2000 arasinda " << setw(5) << " > 2000 ";
	cout << kategori1 << setw(10) << kategori2 << setw(20) << kategori3;



	int kategori1 = 0, kategori2 = 0, kategori3 = 0;
	for (int i = 0; i < N; i++) {
		if ((dizi[i].yas >= 25) && (dizi[i].yas < 35)) {
			if (dizi[i].maas < 1500)
				kategori1++;
			else if ((dizi[i].maas >= 1500) && (dizi[i].maas < 2000))
				kategori2++;
			else if (dizi[i].maas > 2000)
				kategori3++;
		}
	}
	cout << endl << " yaslari 25 ile 35 arasindaki olanlarin maaslari " << endl;
	cout << " < 1500 " << setw(5) << "1500 ile 2000 arasinda " << setw(5) << " > 2000 ";
	cout << kategori1 << setw(10) << kategori2 << setw(20) << kategori3;

	int kategori1 = 0, kategori2 = 0, kategori3 = 0;
	for (int i = 0; i < N; i++) {
		if (dizi[i].yas >= 35)  {
			if (dizi[i].maas < 1500)
				kategori1++;
			else if ((dizi[i].maas >= 1500) && (dizi[i].maas < 2000))
				kategori2++;
			else if (dizi[i].maas > 2000)
				kategori3++;
		}
	}
	cout << endl << " yaslari >35 olanlarin maaslari " << endl;
	cout << " < 1500 " << setw(5) << "1500 ile 2000 arasinda " << setw(5) << " > 2000 ";
	cout << kategori1 << setw(10) << kategori2 << setw(20) << kategori3;
}