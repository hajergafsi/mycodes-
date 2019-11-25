//bir dizideki tek sayilari basta alan bir program 
#include<iostream>
#include<math.h> 
#include<ctime>
#include<iomanip>
using namespace std;
int main() {
	int T[100];
	int N;
	int aux;
	cin >> N;
	srand(time(NULL));
	for (int i = 0; i < N; i++) {
		T[i] = (rand() % 100);
	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		cout <<setw(5)<< T[i];
	}
	int tekSayisi = 0;
	for (int i = 0; i < N; i++) {
		if (T[i] % 2 == 0 ) {
			
			for (int j = i + 1; j < N; j++) {
				if (((T[j]) % 2) == 1) {
				aux = T[i];
				T[i] = T[j];
				T[j] = aux; 
				break;
				}
			}

		}

	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		cout << setw(5)<< T[i] ;
	}
}
