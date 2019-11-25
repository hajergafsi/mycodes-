//Klavyeden girilen karakter katarını ters çevirerek ekrana yazan programı yazınız
//"Ali" -> "ilA" gibi

#include<iostream> 
#include<string>	
#include<iomanip>
using namespace std;
int main() {
	char dizi[100];
	cin >> dizi;
	for (int i = 0; i < (strlen(dizi) / 2); i++) {
		char aux;
		aux = dizi[i];
		dizi[i] = dizi[strlen(dizi) - i - 1];
		dizi[strlen(dizi) - i - 1] = aux;
	}
	cout << endl << "yeni diziniz  " << dizi;
}