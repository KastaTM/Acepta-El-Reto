#include <iostream>

using namespace std;

int v[100000];

int resuelveCaso(int v[], int n) {
	int alta = v[n - 1], cont = 1;
	for (int i = n - 1; i >= 0; --i) {
		if (alta < v[i]) {
			alta = v[i];
			cont++;
		}
	}
	return cont;
}

bool resuelve() {
	int n, resultado;
	cin >> n;
	if (n == 0)
		return false;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	resultado = resuelveCaso(v, n);

	cout << resultado << "\n";

	return true;
}

int main() {
	while (resuelve());
	return 0;
}