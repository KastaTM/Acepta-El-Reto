#include <iostream>

using namespace std;

int v[200000];

int resuelveCaso(int v[], int n, int d) {
	int i = 1, sumatorio = 0, cont = 0;

	while ((i < n) && (sumatorio <= d)) {
		if (v[i - 1] < v[i])
			sumatorio += (v[i] - v[i - 1]);
		else
			sumatorio = 0;
		if (sumatorio > d) {
			++cont;
		}
		++i;
	}
	return cont;
}

bool resuelve() {
	int d, n;
	cin >> d >> n;
	if (!cin)
		return false;

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	if (resuelveCaso(v, n, d) != 0)
		cout << "NO APTA\n";
	else
		cout << "APTA\n";
	return true;

}

int main() {
	while (resuelve());
	return 0;
}