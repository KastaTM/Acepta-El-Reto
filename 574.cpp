#include <iostream>

using namespace std;

long long int calcularTam(long long int n) {
	long long int cont = 3;
	for (int i = 1; i < n; ++i) {
		if (i == 1) {
			cont = cont * cont + (i);
		}
		else {
			cont = cont + cont + (i + 2 + 1);
		}
	}
	return cont;
}

char resuelve(long long int n, long long int pos, long long int tam) {
	long long int aux, aux2, aux3, t;
	aux = tam - (2 + n);
	if (n == 1) {
		if (pos == 1)
			return 'B';
		else if (pos == 2)
			return 'U';
		else if (pos == 3)
			return 'H';
	}
	else {
		aux3 = (aux / 2);//mitad
		if (pos <= aux3) //IZQUIERDA
			return resuelve(n - 1, pos, aux3);
		else if (pos > (aux3 + 2 + n)) {//DERECHA
			t = pos - aux3 - 2 - n;
			return resuelve(n - 1, t, aux3);
		}
		else { //MITAD
			if ((aux3 + 1) == pos)
				return 'B';
			else if ((aux3 + n + 2) == pos)
				return 'H';
			else
				return 'U';
		}
	}
}

bool resuelveCaso() {
	long long int n, k, tam;
	cin >> n >> k;

	if (!cin) {
		return false;
	}

	tam = calcularTam(n);
	cout << resuelve(n, k, tam) << "\n";

	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}