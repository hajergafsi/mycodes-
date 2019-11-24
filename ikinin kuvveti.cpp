#include <iostream>
#include<math.h>

using namespace std;
bool tam(unsigned int);
int main() {
	unsigned int N;
	cout << " control etmek istediginiz sayisini giriniz ... " << endl;
	cin >> N;
	if (tam(N))
		cout << endl << "bu sayi ikinin kuvveti ";
	else cout << "bu sayi ikinin kuvveti degildir ";
}
bool tam(unsigned int sayi) {
	bool test = false;
	unsigned int d=sayi;
	while (d % 2 == 0) {
		d = d / 2;
    }
	if (d == 1)
		test = true;
	return test;
}