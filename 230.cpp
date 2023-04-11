#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

long long int inversiones(vector<int>& v, int ini, int fin) {
	long long int res;
	int mitad, aux, i, vj, vk, tam;
	vector <int> w;

	if (fin == ini) { //Caso Base con tamaño 1, no hay desplazamientos, res=0
		res = 0;
	}
	else if ((fin - ini) == 1) {
		res = 0;
		if (v[ini] > v[fin]) { //Caso base con tamaño 2. Si se intercambian res=1
			++res;
			aux = v[ini];
			v[ini] = v[fin];
			v[fin] = aux;
		}
	}
	else {
		mitad = (ini + fin) >> 1;
		res = inversiones(v, ini, mitad) + inversiones(v, mitad + 1, fin);

		tam = fin - ini + 1;
		w.resize(tam);
		i = 0;
		vj = ini; //Iterador del paquete izquierdo
		vk = mitad + 1; //Iterador del paquete derecho

		/*Aquí empieza el mergesort, cada vez que se coloca una componente del paquete derecho (vk)
		en el vector auxiliar W, se computa cuántas posiciones ha descendido. Eso se suma a RES.
		*/
		while ((vj <= mitad) && (vk <= fin)) { //Ordenación por inserción hasta que uno de los lados se acabe
			if (v[vj] <= v[vk]) {
				w[i] = v[vj];
				++vj;
			}
			else {
				w[i] = v[vk];
				res += abs(ini + i - vk);
				++vk;
			}
			++i;
		}

		while (vj <= mitad) { //Como cada lado ya viene ordenado, ya no hacen falta comparaciones
			w[i] = v[vj];
			++vj;
			++i;
		}
		while (vk <= fin) {
			w[i] = v[vk];
			res += abs(ini + i - vk);
			++vk;
			++i;
		}
		//Acaba el ordenado, ahora hay que recopiar sobre V para continuar.

		for (i = 0; i < tam; ++i) {
			v[ini + i] = w[i];
		}

	}
	return res;
}

bool resuelveCaso() {

	long long int num, aux;
	vector<int> v;

	cin >> num;

	if (num == 0) { return false; }

	for (int i = 0; i < num; ++i) {
		cin >> aux;
		v.push_back(aux);
	}
	aux = inversiones(v, 0, v.size() - 1);
	cout << aux << "\n";

	return true;
}

int main() {
	while (resuelveCaso());

	return 0;
}