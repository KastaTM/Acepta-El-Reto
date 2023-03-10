#include <iostream>

using namespace std;

int v[100000];

int resuelveCaso(int v[], int n, int k) {
	int i = 0, cont0 = 0, cont1 = 0, longitud = 0, max = 0;

	while (i < n) {
		if (v[i] == 1) {
			++longitud;
			++cont1;
			cont0 = 0;
			if (max <= longitud) {
				max = longitud;
			}
		}
		else {
			if (cont1 > 0) {
				++cont0;
				++longitud;
			}
		}
		if (cont0 > k) {
			cont1 = 0;
			longitud = 0;
			cont1 = 0;
		}
		++i;
	}
	return max;
}

bool resuelve() {
	int n, k;
	cin >> n >> k;
	if (n == 0 && k == 0)
		return false;

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	int resultado = resuelveCaso(v, n, k);

	cout << resultado << "\n";

	return true;
}

int main() {
	while (resuelve());
	return 0;
}