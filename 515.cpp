#include <iostream>

using namespace std;


int resuelveCaso(int n, int quien) {
	if (n == 0) {
		return 0;
	}
	int aux;

	if (quien == 0) {
		aux = resuelveCaso(n - 1, 1);
	}
	else {
		if (n % 2 == 0) {
			aux = resuelveCaso(n - 2, 0);
		}
		else
			aux = resuelveCaso(n - 1, 0);
	}

	return aux + 1;
}

bool resuelve() {
	int n;
	cin >> n;
	if (n == 0)
		return false;

	cout << resuelveCaso(n, 0) << "\n";
	return true;
}

int main() {
	while (resuelve());
	return 0;
}