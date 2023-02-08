#include <iostream>

using namespace std;

int resuelveCaso(int n) {
	int ret = 0, conteo = n / 5;
	while (conteo > 0) {
		ret += conteo;
		conteo /= 5;
	}
	return ret;
}

void resuelve() {
	int n, resultado;
	cin >> n;

	resultado = resuelveCaso(n);

	cout << resultado << "\n";
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		resuelve();
	}
	return 0;
}