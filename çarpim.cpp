//klavyeden girilen NxN A matrisini transpozesiyla çarpip B matrisini (B=A*A^T)olusturan ve bu 
//matrisinin en buyuk ve en kuçuk elemanini bulunan bir program


#include <iostream> ;
#include <math.h>;
#include <iomanip> ;

using namespace std ;
int A[100][100], At[100][100], B[100][100], i, j, N;
int main() {
	cout << "enter the number of elements of the matrix  N=  ";
	cin >> N;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			cout << "A[" << i << "][" << j << "]=  ";
			cin >> A[i][j];
		}
	}
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			At[j][i] = A[i][j];
		}
	}
	cout << "A=";
	for (i = 1; i <= N; i++) {
		cout << setw(4)<< A[1][i] ;
	}
	cout << endl;
	for (i = 2; i <= N; i++) {
		cout << "  ";
		for (j = 1; j <= N; j++) {
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}
		cout << "At=";
		for (i = 1; i <= N; i++) {
			cout << setw(4)<< At[1][i] ;
		}
		cout << endl;
		for (i = 2; i <= N; i++) {
			cout << "   ";
			for (j = 1; j <= N; j++) {
				cout << setw(4) << At[i][j];
			}
			cout << endl;
		}
		for (i = 1; i <= N; i++) {
			for (j = 1; j <= N; j++) {
				B[i][j] = 0;
			}
		}
		
		for (i = 1; i <= N; i++) {
			for (j = 1; j <= N; j++) {
				for (int m = 1; m <= N; m++){
					B[i][j] = B[i][j] + ((A[i][m]) * (At[m][j]));
				}
				
			}
		}
		cout << "B=";
		for (i = 1; i <= N; i++) {
			cout << setw(4) << B[1][i];
		}
		cout << endl;
		for (i = 2; i <= N; i++) {
			cout << "  ";
			for (j = 1; j <= N; j++) {
				cout << setw(4) << B[i][j];
			}
			cout << endl; 
		}
	}
