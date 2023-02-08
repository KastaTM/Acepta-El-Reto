#include <iostream>

using namespace std;


int resuelveCaso(int n) {
	int aux;
	if (n < 10) {
		aux = n%10;
		cout << n;
	}
	else {
		aux = resuelveCaso(n / 10) + (n % 10);
		cout << " + " << (n % 10);
	}
	return aux;
}

bool resuelve() {
	int n;
	cin >> n;
	if (n < 0)
		return false;

	int suma = resuelveCaso(n);
	cout << " = " << suma << "\n";
	return true;
}

int main() {
	while (resuelve());
	return 0;
}