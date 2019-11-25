/*klaviyeden girilen n elemanli nir A dizisinin aritmetik ortalamasini bulup, bu aritmetik ortalamadan
kuçuk elemanlari b dizisine ve buyuk olan elemanlari da c dizisine yerlestiren programi yazilimini 
yapiniz */

#include<iostream> ;
#include<math.h> 
#include<iomanip> ;
using namespace std; 
int A[100], B[100], C[100],i,j,k,n,t;
double art;
int main() {
	t = 0;
	cout << "dizinin sayisini giriniz N= "; 
	cin >> i;
	for (i = 1; i <= n; i++) {
		cout << "A[" << i << "]= ";
		cin >> A[i];
		t = t + A[i];
	}
	art = (t / n) ;
	cout << art;
	j = 1;
	k = 1;
	int tb = 0;
	int tc = 0;
	for (i = 1; i <= n; i++); {
		if (A[i] < art) {
			B[j] = A[i];
			j++;
			tb++;
		}
		else if (A[i] > art) {
			C[k] = A[i];
			k++;
			tc++;
		}
	}
	for (j = 1; j <= tb; j++) {
		cout <<"B["<<j<<"]"<< B[j] <<endl ; 
	}
	for (k = 1; k <= tc; k++) {
		cout <<"C[" << k << "]" << C[k] << "  ";
	}

}
