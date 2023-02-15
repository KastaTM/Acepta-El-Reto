#include <iostream>

using namespace std;

int resuelveCaso(int x, int n) {
	int i = 1, ret = 1, aux = 1;

	while (i <= n) {
		aux *= x;
		aux %= 1000007;
		ret += aux;
		ret %= 1000007;
		++i;
	}
	return ret;
}

bool resuelve() {
	int x, n;
	cin >> x >> n;
	if (!cin)
		return false;

	int resultado = resuelveCaso(x, n);

	cout << resultado << "\n";	

	return resultado;
}

int main() {
	while (resuelve());
	return 0;
}