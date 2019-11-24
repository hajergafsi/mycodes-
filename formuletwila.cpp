#include<iostream>
#include<math.h>
using namespace std;
int faktoryel(int);
int toplam1(int);
int ustAl(int,int);
int main() {
	int i, j,t, toplam = 0;
	while (j < i) {
		cout << " i sayisini giriniz  ";
		cin >> i;
		cout << endl << " j sayisini giriniz ";
		cin >> j;
	}
	while (t < 10) {
		cout << endl << "t sayisini giriniz ";
		cin >> t;
	}
	for (int p = i; p <= j; p++) {
		toplam = toplam + toplam1(t,p);
	}
	cout << endl << "toplam = " << toplam;
}
int faktoryel(int sayi) {
	int fak = 1;
	for (int i = 2; i <= sayi; i++) {
		fak = fak * i;
	}
	return fak;
}
int ustAl(int taban, int ust) {
	int sonuc = 1;
	for (int i = 1; i <= ust; i++) {
		sonuc = sonuc * taban;
	}
	return sonuc;
}
int toplam1(int sayi,int x) {
	int sonuc = 0;
	for (int i = sayi; i <= 10; i++) {
		sonuc = sonuc + faktoryel(i) + ustAl(i,x); 
	}
}