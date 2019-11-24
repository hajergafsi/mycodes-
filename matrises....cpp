//NxN matrisler A B C ; D yi D=A.(Bt+Ct)kullanarak olusturan ve izini bulan bir program

#include <iostream> ;
#include <math.h>;
#include <iomanip> ;

using namespace std;
int A[100][100], At[100][100], B[100][100], i, j, N, C[100][100], Bt[100][100], Ct[100][100], D[100][100], E[100][100];
int main() {
	cout << "enter the number of elements of the matrix  N=  ";
	cin >> N; 
//remplissage de A

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			cout << "A[" << i << "][" << j << "]=  ";
			cin >> A[i][j];
		}
	}

//remplissage de B

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			cout << "B[" << i << "][" << j << "]=  ";
			cin >> B[i][j];
		}
	}

//remplissage de C

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			cout << "C[" << i << "][" << j << "]=  ";
			cin >> C[i][j];
		}
	}

//Remplissage de Bt 

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			Bt[j][i] = B[i][j];
		}
	}

//Remplissage de Ct 

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			Ct[j][i] = C[i][j];
		}
	}

//Affichage de A 

	cout << "A=";
	for (i = 1; i <= N; i++) {
		cout << setw(4) << A[1][i];
	}
	cout << endl;
	for (i = 2; i <= N; i++) {
		cout << "  ";
		for (j = 1; j <= N; j++) {
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}

//Affichage de B

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
//Affichage de C
	cout << "C=";
	for (i = 1; i <= N; i++) {
		cout << setw(4) << C[1][i];
	}

	cout << endl;
	for (i = 2; i <= N; i++) {
		cout << "  ";
		for (j = 1; j <= N; j++) {
			cout << setw(4) << C[i][j];
		}
		cout << endl;
	}
	//Affichage de Bt 

	cout << "Bt=";
	for (i = 1; i <= N; i++) {
		cout << setw(4) << Bt[1][i];
	}
	cout << endl;
	for (i = 2; i <= N; i++) {
		cout << "   ";
		for (j = 1; j <= N; j++) {
			cout << setw(4) << Bt[i][j];
		}
		cout << endl;
	}

	//Affichage de Ct 

	cout << "Ct=";
	for (i = 1; i <= N; i++) {
		cout << setw(4) << Ct[1][i];
	}
	cout << endl;
	for (i = 2; i <= N; i++) {
		cout << "   ";
		for (j = 1; j <= N; j++) {
			cout << setw(4) << Ct[i][j];
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
			E[i][j] = Bt[i][j] + Ct[i][j]; 
		}
	}

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			for (int m = 1; m <= N; m++) {
				D[i][j] = D[i][j] + ((A[i][m]) * (E[m][j]));
			}

		}
	}
	cout << "D=";
	for (i = 1; i <= N; i++) {
		cout << setw(4) << D[1][i];
	}
	cout << endl;
	for (i = 2; i <= N; i++) {
		cout << "  ";
		for (j = 1; j <= N; j++) {
			cout << setw(4) << D[i][j];
		}
		cout << endl;
	}
	int izi = 0;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if (i = j) izi = izi + D[i][j];
		}
	}
	cout << "izi D(N,N) =  " << izi;
}