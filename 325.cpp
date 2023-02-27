#include <iostream>

using namespace std;


void resuelveCaso(
					//Datos del problema
					int chocolate,
					int vainilla,
					//Sol parcial
					int k,
					int numBolasC,
					int numBolasV,
					char solParcial[],
					string& solFinal
) {
			
	if (numBolasC == chocolate && numBolasV == vainilla) {
		for (int i = 0; i < chocolate + vainilla; ++i) {
			solFinal += solParcial[i];
		}
		//cout << " ";
		solFinal += " ";
	}

	//Caso recursivo
	//Caso 1: Bola de chocolate(Si quedan)
	if (numBolasC < chocolate) {
		solParcial[k] = 'C';
		resuelveCaso(chocolate, vainilla, k+1, numBolasC+1, numBolasV, solParcial, solFinal);
	}



	//Caso 2: Bola de vainilla(Si quedan)
	if (numBolasV < vainilla) {
		solParcial[k] = 'V';
		resuelveCaso(chocolate, vainilla, k+1, numBolasC, numBolasV + 1, solParcial, solFinal);
	}

}

void resuelve() {
	int chocolate, vainilla;
	cin >> chocolate >> vainilla;
	char solParcial[15];
	string solFinal;
	resuelveCaso(chocolate, vainilla,0,0,0,solParcial, solFinal);
	for (int i = 0; i < solFinal.size() - 1; ++i) {
		cout << solFinal[i];
	}
	cout << "\n";
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelve();
	}
}