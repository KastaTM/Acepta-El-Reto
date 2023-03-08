#include <iostream>

using namespace std;

int v[100000];

//int resuelveCaso(int v[], int n, int a, int b, int numPartituras) {
//	//Busqueda binaria
//	//Con 0 no das con 1 tampoco.....con 9 si y con 10 si
//	//Hay un punto donde el minimo para alante
//	//Como el de SaltandoAlOtroLado
//}

//¿Es posible tocar si como mucho ponemos a
// maxPersonasPorAtril y tenemos p atriles?
bool posible(int maxPersonasPorAtril, int p, int v[], int n) {
	int necesarios = 0;
	for (int i = 0; i < n; ++i) {
		necesarios += (v[i] + maxPersonasPorAtril - 1) / maxPersonasPorAtril; //Division por exceso
	}
	return necesarios <= p;
}

//La mayoria de busqueda binaria del estilo son muy parecidos solo cambia el posible

bool resuelve() {
	int numPartituras, n;
	cin >> numPartituras >> n;
	if (!cin)
		return false;

	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		sum += v[i];
	}

	int a = 0;
	int b = sum;

	while (a < b) {
		int m = (a + b) / 2;
		if (posible(m, numPartituras, v, n))
			b = m;
		else
			a = m + 1;
	}

	cout << a << endl;

	return true;
}

int main() {
	while (resuelve());
	return 0;
}

//bool existe(int v[], int numM, int& numP) {
//	int numPartiturasNecesarias = 0;
//	for (int i = 0; i < v.size() && numPartiturasNecesarias <= numP; ++i) {
//		numPartiturasNecesarias += (instrumentos[i] / numM);
//		if (instrumentos[i] % numM != 0)
//			numPartiturasNecesarias += 1;
//	}
//
//	return numPartiturasNecesarias <= numP;
//}
////principio y final representan un número de músicos por los que agrupas
//int busquedaBinaria(int v[], int principio, int final, int& numP) {
//	if (principio == final)
//		return principio;
//	else {
//		int m = (principio + final) / 2;
//		if (existe(instrumentos, m, numP)) { //esto pasa si hay suficientes partituras cuando agrupo por m músicos
//			return busquedaBinaria(instrumentos, principio, m, numP);
//
//		}
//		else {
//			return busquedaBinaria(instrumentos, m + 1, final, numP);
//		}
//
//	}
//
//}
//bool resuelve() {
//	int n, p, valor, maximo = -1;
//	cin >> p >> n;
//	if (!cin)
//		return false;
//	for (int i = 0; i < n; ++i) {
//		cin >> v[i];
//		maximo = max(maximo, valor);
//	}
//
//	cout << busquedaBinaria(v, 0, maximo, p) << '\n';
//
//	return true;
//
//}
//int main() {
//	while (resuelve());
//	return 0;
//}