
#include<iostream> 
#include<string>	
#include<iomanip>
using namespace std;
int main() {
	char dizi[100];
	int n;
	cin >> dizi;
	for (int i = 0; i < strlen(dizi); i++) {
		if ((dizi[i] >= 'a') && (dizi[i] <= 'z'))
			n = int(dizi[i]);
		dizi[i] = static_cast<char>(n - 32);
	}
	cout << endl << "yeni diziniz  " << dizi;
}