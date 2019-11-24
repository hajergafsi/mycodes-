//toplam (k (2^k +k)

#include<iostream>
#include<math.h>
using namespace std;

int ustAl(int);
int main() {
	int i, j, toplam = 0;
	cout << " i sayisini giriniz  ";
	cin >> i;
	cout << endl << " j sayisini giriniz ";
	cin >> j;
	for (int p = i; p <= j; p++) {
		toplam = toplam + ustAl(p) + p;
	}
	cout << endl << "toplam = " << toplam;
}

int ustAl(int ust) {
	int sonuc = 1;
	for (int i = 1; i <= ust; i++) {
		sonuc = sonuc * 2;
	}
	return sonuc;
}