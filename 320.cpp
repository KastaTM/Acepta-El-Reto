#include <iostream>

using namespace std;

int v[100000];

// {Pre: 0 <= n <= logntud(v) }
// Complejidad: O(n)
int resuelveCaso(int v[], int n, int pesoNieve) {
	int a = 0;
	int b = 0;
	int vivas = 0;
	int ret = 0;

	// { I:
	//	(0 <= a <= b <= n) ^
	//	vivas = #i : a <= i <= b : v[i] >= pesoNieve 
	//	ret = max i,j: (0 <= i <= j < b) ^ valido(v,i,j,k): j-i+1
	// }
	// Cota: 2n - a - b
	while (b < n) {
		if (vivas <= 5) {
			if (v[b] >= pesoNieve)
				++vivas;
			++b;
		}
		else {
			if (v[a] >= pesoNieve)
				--vivas;
			++a;
		}
		if(vivas <= 5)
			ret = max(ret, b - a);
	}

	return ret;
}
// { Post:  
// ret = max i,j: (0 <= i <= j < b) ^ valido(v,i,j,k): j-i+1
// donde
// valido(v,a,b,k) = (#i : a <= i <= b : v[i] >= pesoNieve ) <= 5
// }

void resuelve() {
	int pesoNieve, n;
	cin >> pesoNieve >> n;

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	cout << resuelveCaso(v, n, pesoNieve) << "\n";
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i)
		resuelve();
	return 0;
}