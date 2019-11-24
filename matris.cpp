//A matrisinin her bir sutun elemanlarini kendi aralarinda buyukten kuçuge dogru siralanan programi

#include <iostream>;
#include<iomanip> ;
#include<math.h>; 

int A[100][100], i, j, N;
using namespace std;
int main() {
	cout << "enter the number of elements N of the matrix A N = ";
	cin >> N;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			cout << "A[" << i << "][" << j << "]=  ";
			 cin >> A[i][j];
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
     
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= (N-1); j++) {
			for(int m=j+1 ; m<=N;m++){
				if (A[j][i] < A[m][i]) {
					int	aux = A[j][i];
					A[j][i] = A[m][i];
					A[m][i] = aux;
				}
			}
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