#include <iostream>

using namespace std;

int v[24];


void resuelveCaso(
					//Datos del problema
					int n,
					int v[],
					int pesoTotal,
					
					//Sol parcial
					int k,
					int pesoParcial,
					//Marcaje
					int beneficioRestante,
					int uvasComidas,

					//Sol final
					int &soluciones
) {

	//Caso base
	if (n == k) {
		++soluciones;
		return;
	}



	//Caso recursivo
	//Caso 1: Me como la uva
	if (pesoParcial + v[k] <= pesoTotal && uvasComidas < 12) {
		resuelveCaso(n, v, pesoTotal, k+1, pesoParcial+v[k], beneficioRestante-v[k], uvasComidas+1, soluciones);
	}


	//Caso 2: No me como la uva
	if(n - k + uvasComidas > 12)
	resuelveCaso(n, v, pesoTotal, k + 1, pesoParcial, beneficioRestante-v[k], uvasComidas, soluciones);

}


int resuelveCaso(int n, int v[], int pesoTotal) {
	int soluciones = 0, beneficioRestante = 0;
	for (int i = 0; i < n; ++i)
		beneficioRestante += v[i];

	resuelveCaso(n, v, pesoTotal, 0, 0, beneficioRestante, 0, soluciones);
	return soluciones;
}

bool resuelve() {
	int pesoTotal,  n;
	cin >> pesoTotal >> n;
	if (pesoTotal == 0 && n == 0)
		return false;

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	cout << resuelveCaso(n,v,pesoTotal) << "\n";

	return true;
}

int main() {
	while (resuelve());
	return 0;
}