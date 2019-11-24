#include<iostream> 
#include<string> 
using namespace std;
int main() {
	char yazi[100],kar,yeniDizi[100];
	int j = 0;
	cin.getline(yazi, 100) ;
	cout << endl << "silmek istediginiz karakteri giriniz ";
	cin >> kar;
	for (int i = 0; yazi[i] != NULL; i++) {
		if (yazi[i] != kar) {
			yeniDizi[j] = yazi[i];
			j++;
		}
}
	cout << endl << "yeni diziniz  : ";
	for (int i=0; i<j ;i++){
		cout << yeniDizi[i];
	}
	return 0;
}