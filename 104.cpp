#include <iostream>

using namespace std;

bool resuelveCaso(int pi, int di, int pd, int dd, int& peso) {
	int pii, dii, pdi, ddi, pid, did, pdd, ddd;
	bool izq = true, drch = true;

	if (pi == 0) {
		cin >> pii >> dii >> pdi >> ddi;
		izq = resuelveCaso(pii, dii, pdi, ddi, pi);
	}
	if (pd == 0) {
		cin >> pid >> did >> pdd >> ddd;
		drch = resuelveCaso(pid, did, pdd, ddd, pd);
	}

	peso = pi + pd;
	return ((pi * di == pd * dd) && drch && izq);
}

bool resuelve() {
	int pi, di, pd, dd;
	cin >> pi >> di >> pd >> dd;
	if (pi == 0 && di == 0 && pd == 0 && dd == 0)
		return false;
	int peso = 0;
	if (resuelveCaso(pi, di, pd, dd, peso))
		cout << "SI\n";
	else
		cout << "NO\n";

	return true;
}

int main() {
	while (resuelve());
	return 0;
}