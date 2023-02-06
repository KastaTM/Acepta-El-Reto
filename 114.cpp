#include <iostream>

using namespace std;

int resuelveCaso(int n) {
	int ret = 1;
	if (n < 5) {
		for (int i = 1; i <= n; ++i) {
			ret *= i;
			ret = ret % 10;
		}
	}
	else
		ret = 0;

	return ret;
}

void resuelve() {
	int numero, resultado;
	cin >> numero;
	resultado = resuelveCaso(numero);
	cout << resultado << "\n";
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		resuelve();
	return 0;
}