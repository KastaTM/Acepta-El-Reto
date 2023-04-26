#include <iostream>

using namespace std;

const int MAX = 500000;
int v[MAX];

int resuelve(int v[], int ini, int fin, int cont) {
	int mitad, mejillon;
	if (ini == fin) { //Tamaño 1
		cont = 1;
		mejillon = 1;
	}
	else {
		mitad = (ini + fin) / 2;
		cont += resuelve(v, ini, mitad, cont);
		cont += resuelve(v, mitad, fin, cont);
		if (v[ini] == v[fin]) {
			cont++;
		}
		else if(v[ini] > v[mitad + 1]){
			cont--;
		}
	}
	return cont;
}

bool resuelveCaso() {
	int tam;
	cin >> tam;
	if (!cin) {
		return false;
	}
	else {
		for (int i = 0; i < tam; ++i) {
			cin >> v[i];
		}
		cout << resuelve(v, 0, tam - 1 , 0) << "\n";
	}
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}