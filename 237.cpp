#include <iostream>

using namespace std;


//Tam: n
//Recursión por división:
//a = 1 \
//b = 10 |	=> a=b^k => O(n^k log n) => O(n^0 log n) => O(log n)
//k = 0 /


//Version Buena
//Esta es a que hace el algoritmo
bool resuelveCaso(long long n, int& numDigitos) {
	if (n < 10) {
		numDigitos = 1;
		return true;
	}

	bool aux = resuelveCaso(n / 10, numDigitos);
	++numDigitos;
	return ((n % numDigitos) == 0) && aux;
}

//Esta función es porque es la que pide el programa
bool resuelveCaso(long long n) {
	int aux;
	return resuelveCaso(n, aux);
}

bool resuelve() {
	long long n;
	cin >> n;
	if (!cin)
		return false;
	if (resuelveCaso(n))
		cout << "POLIDIVISIBLE\n";
	else
		cout << "NO POLIDIVISIBLE\n";
}

int main() {
	while (resuelve());
	return 0;
}