#include <iostream>

using namespace std;

int cantidadTinta(int n) {
	//Caso base
	if (n == 1)
		return 4 * n;

	//Caso recursivo
	int aux = cantidadTinta(n / 2);
	return aux * 4 + n * 4;
}

bool resuelve() {
	int n;
	cin >> n;
	if (!cin)
		return false;

	cout << cantidadTinta(n) << "\n";
	return true;
}

int main() {
	while (resuelve());
	return 0;
}