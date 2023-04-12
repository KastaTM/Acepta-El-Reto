#include <iostream>

using namespace std;

const int MAX = 100;
int v[MAX];


int resuelve(int v[], int n) {
	int i = 0;
	while (i < n - 1) {
		if (v[i + 1] > v[i]) {
			++i;
		}
		else {
			return false;
		}
	}
	return true;
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
	if (resuelve(v, n)) {
		cout << "SI\n";
	}
	else {
		cout << "NO\n";
	}
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}