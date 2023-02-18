#include <iostream>

using namespace std;

int v[1000000];

int resuelveCaso(int v[], int n) {
	int desdeFuera = 0, desdeDentro = 0;
	for (int j = 0; j < n; ++j) {
		desdeDentro += v[j];
	}
	int i = 0, menor = abs(desdeDentro), suma = 0, ret = 0;

	while (i < n) {
		suma = desdeFuera - desdeDentro;
		if (suma < 0)
			suma = -suma;

		if (suma < menor) {
			menor = suma;
			ret = i;
		}
		desdeFuera += v[i];
		desdeDentro -= v[i];
		++i;
	}
	return ret;
}

bool resuelve() {
	int n, sumatorio = 0;
	cin >> n;
	if (n == 0)
		return false;

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	cout << resuelveCaso(v, n) << "\n";

	return true;
}

int main() {
	while (resuelve());
	return 0;
}