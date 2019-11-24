//Bir C++ programı yazılacaktır.Bu program öncelikle dışarıdan bir sayı isteyecektir.Ardından bu sayı adedi kadar dışarıdan sayı
//isteyip bunların en büyüğünü ve en küçüğünü ekrana yazdıran programı yazdırınız.
#include<iostream> 
#include<math.h> 
using namespace std;
void bul(int[100],int);

int main() {
	int T[100];
	int n;
	cout << "bir sayi giriniz.. ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << endl << " bir sayi giriniz..."<<endl;
		cin >> T[i];
	}
	bul(T,n);
}
void bul(int tab[100],int s) {
	int max=tab[0], min=tab[0];
	for (int i = 1; i < s; i++) {
		if (tab[i] < min) min = tab[i];
		else if (tab[i] > max) max = tab[i];
	}
	cout << " girdiginiz en buyuk elemani = " << max<<endl;
	cout << "girdiginiz en kucuk elemani =  " << min << endl;
}
