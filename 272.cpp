#include <iostream>

using namespace std;

int resuelveCaso(int n) {
	if (n < 6) {
		cout << n;
		return n;
	}

	int aux = n % 6;
	resuelveCaso(n / 6);
	cout << aux;
	return aux;
}

void resuelve() {
	int n;
	cin >> n;
	resuelveCaso(n);
	cout << "\n";
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i)
		resuelve();
	return 0;
}
