#include <iostream> ;
#include <math.h> ;
#include<iomanip> ;
int A[100][100], i, j, N;
using namespace std;
int main() {
	cout << "enter the number of elements N of the matrix A N = ";
	cin >> N;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if (i == j)  A[i][j] = 1;
			else if (i != j) A[i][j] = 0;
		}
	}
		cout << "A= ";
		for (i = 1; i <= N; i++) {
			cout << A[1][i] << setw(4);
		}
		cout << endl;
		for (i = 2; i <= N; i++) {
			for (j = 1; j <= N; j++) {
				cout << setw(4) << A[i][j];
			}
			cout << endl;
		}
	
}