#include<iostream>

using namespace std;

struct mesafe {
	int metre;
	int cm;
};

struct ekran {
	char uretici[100];
	char urunadi[100];
	mesafe en;
	mesafe boy;
};

void degerYazdir(ekran, char[100]);

void degerYazdir(ekran , char ch[100]) {

}
int bul(ekran dizi[100], int , char[100]);
int bul(ekran dizi[100], int n, char uret[100]) {
	int sayi = 0;
	for (int i = 0; i < n; i++) {
		if (dizi[i].uretici == uret)
			sayi++;
	}
}
ekran degerOku();
ekran degerOku() {
	ekran urun;
	//int x;
	cout << "ureticini giriniz...";
	cin >> urun.uretici;
	cout << "urunun adini  giriniz...";
	cin >> urun.urunadi;
	cout << "en kac metre ? ";
	cin >> urun.en.metre;
	cout<<"en kac cm ? ";
	cin >> urun.en.cm;
	cout << "urunun boyunu metre ve cm ile giriniz";
	cin >> urun.boy.metre;
	cin >> urun.boy.cm;
	//cout << endl << x << ". ogrencini adini ve soyadini " << ogr.Ad << " " << ogr.SoyAd << endl;
	return urun;
}
int main() {
	int N ;
	cin >> N;
	bool test;
	test = false;
	char uret1[100];
	ekran dizi[5] ; 
	dizi[1].uretici = "d";
	dizi[1].urunadi = "a";
	dizi[1].en.metre = 5;
	dizi[1].en.cm = 1;
	for (int i = 1; i < 5; i++) {
		dizi[i] = degerOku();
	}
	cout << "uretici giriniz .." << endl;
	cin >> uret1;
	cout << "bu uretici   " << bul(dizi, 5, uret1) << " defa kullanilmstir ";

	//for (int i = 0; i < N; i++) {
	//	 ekran urun1 = bilgidegerOku(); 
	//}
}