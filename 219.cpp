#include <iostream>

using namespace std;

int v[10000];

//{ Pre: 0 <= n <= longitud(v) }
int resuelveCaso(int v[], int n) {/*return ret*/
	int i = 0, ret = 0;

	while (i < n) {
		if (v[i] % 2 == 0)++ret;
		++i;
	}
	return ret;
}
//{ Post: #i : 0 <= i < n : v[i]%2 == 0 }

void resuelve() {
	int n, resultado;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	resultado = resuelveCaso(v, n);

	cout << resultado << "\n";
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		resuelve();
	return 0;
}