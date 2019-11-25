#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int N;
	cout << "satir sayisini giriniz .... " << endl;
	cin >> N;
	int k = 2;
	int j = N  ;
	for (int i = 0; i < N; i++) {
	
	
			cout<<setw(j);
			for (int p = 0; p < k; p++) {
				cout<<"*" ;
			}
			cout << endl;
			k = k + 2;
			j--;
		}
	
	}
