#include <iostream>

using namespace std;

int v[10000];


//{ Pre: 0 <= n <= longitud(v) }
void resuelveCaso(int v[], int n, int &picos, int & valles) {
	int i = 1;

	while (i < n - 1) {
		if (v[i - 1] < v[i] && v[i] > v[i + 1]) {
			++picos;
		}
		else if (v[i] < v[i - 1] && v[i] < v[i + 1]) {
			++valles;
		}
		++i;
	}
}
//{ Post: picos = #i : 1<=i< n : v[i - 1] < v[i] && v[i] > v[i + 1] ^
// valles = #i : 1<=i< n : v[i] < v[i - 1] && v[i] < v[i + 1]

void resuelve() {
	int n, valles = 0, picos = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	resuelveCaso(v, n, picos, valles);

	cout << picos << " " << valles << "\n";


}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelve();
	}
	return 0;
}