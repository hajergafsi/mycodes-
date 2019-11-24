//Dışarıdan girilen bir karakter dizisindeki bütün harfleri büyük harfe çeviren c++ programını yazınız.

#include<iostream> 
#include<string.h>
#include<string>
using namespace std;
int main() {
	char yazi[100];
	cin.getline(yazi, 100);
	for (int i = 0; yazi[i] != NULL; i++) {
		if (((int(yazi[i])) <= 122) && ((int(yazi[i])) >= 97)) {
			int n = int(yazi[i]);
				yazi[i] = static_cast<char>(n - 32);
		}
	}
	cout << endl << "yeni diziniz " ;
		for (int i = 0; i < strlen(yazi); i++) {
			cout << yazi[i];
}
}