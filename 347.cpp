#include <iostream>

using namespace std;

int resuelveCaso(int ancho, int alto) {
	if (ancho < 10 || alto < 10) {
		return 0;
	}
	int aux;

	if (ancho > alto) {
		aux = ancho / alto;
		ancho -= (aux * alto);
	}
	else {
		aux = alto / ancho;
		alto -= (aux * ancho);
	}

	return resuelveCaso(ancho, alto) + aux;

}

bool resuelve() {
	int ancho, alto;
	cin >> ancho >> alto;
	if (ancho == 0 && alto == 0)
		return false;

	cout << resuelveCaso(ancho, alto) << "\n";

	return true;
}

int main() {
	while (resuelve());
	return 0;
}