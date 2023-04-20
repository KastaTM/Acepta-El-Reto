#include <iostream>

using namespace std;

const int MAX = 1000;
int v[MAX];


int resuelve(int v[], int n) {
	int i = 1, cont = 0;

	if (v[0] > v[1] && v[0] > v[n - 1]) {
		++cont;
	}
	else if (v[n - 1] > v[n - 2] && v[n - 1] > v[0]) {
		++cont;
	}
	while (i < n - 1) {
		if (v[i - 1] < v[i] && v[i] > v[i + 1]) {
			++cont;
		}
		++i;
	}
	return cont;
}

bool resuelveCaso() {
	int n;
	cin >> n;
	if (n == 0) {
		return false;
	}

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	cout << resuelve(v, n) << "\n";
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}