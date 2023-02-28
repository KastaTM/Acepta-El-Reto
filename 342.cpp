#include <iostream>

using namespace std;

const int MAX = 250000;
int v[MAX];

bool resuelve(int v[], int ini, int fin, int n, int k, int cont) {
	if (ini == fin) {
		return true;
	}
	else if (cont == k) {
		return false;
	}
	else {
		if (v[cont] > fin || v[cont] < ini) { //Numero fuera de rango
			return resuelve(v, ini, fin, n, k, cont + 1);
		}
		else if (v[cont] <= n) { //Reducir ini
			return resuelve(v, v[cont], fin, n, k, cont + 1);
		}
		else { //Reducir fin ( -1 porque ya cuenta el numero)
			return resuelve(v, ini, v[cont] - 1, n, k, cont + 1);
		}
	}
}

bool resuelveCaso() {
	int ini, fin, n, k;
	cin >> ini >> fin >> n;
	if (ini == 0 && fin == 0 && n == 0) {
		return false;
	}
	else {
		cin >> k;
		for (int i = 0; i < k; ++i) {
			cin >> v[i];
		}
		if (resuelve(v, ini, fin, n, k, 0)) {
			cout << "LO SABE\n";
		}
		else {
			cout << "NO LO SABE\n";
		}
	}
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}