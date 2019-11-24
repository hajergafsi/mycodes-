/*
Boyutu dışarıdan girilen bir dizinin bütün elemanları 0 ile 100 arasında rastgele değerler alsın(rand() fonksiyon 
kullanılacak). Bu dizideki 2 ve 3 sayılarına tam bölünebilenleri ekrana çıkartan.*/


#include <math.h>
#include <iostream>
#include<ctime>
#include<cstdlib>
#include <iomanip>
using namespace std;

int main() {
	int N, dizi[100],ikiyeBolunebilen[100],uceBolunebilen[100],iki=0,uc=0;
	cout << " dizinin boyutunu giriniz ";
	cin >> N;
	srand(time(NULL));
	for (int i = 0; i < N; i++) {
		cout << setw(4) << i;
	}
	cout << endl;

	for (int i = 0; i < N; i++) {
		dizi[i] = rand() % 100;
		cout << setw(4) << dizi[i];
	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		if ((dizi[i] % 2) == 0) {
				ikiyeBolunebilen[iki] = dizi[i];		
				iki++;
	 }
		if ((dizi[i] % 3) == 0) {
			uceBolunebilen[uc] = dizi[i];
			uc++;
		}
	}
	cout << "dizinin 2 sayisina bolebilen sayilar  " << endl;
	for (int i = 0; i < iki; i++) {
		cout << ikiyeBolunebilen[i] << setw(4);
	}
	cout << endl;
	cout << "dizinin 3 sayisina bolebilen sayilar  " << endl;
	for (int i = 0; i < uc; i++) {
		cout << uceBolunebilen[i] << setw(4);
	}

}