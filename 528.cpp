#include <iostream>

using namespace std;

double v[200000];

long long int  resuelveCaso(double v[], int n) {
	int i = 0, decimal = 0, mayor1 = 0, es0o1 = 0;
	long long int ret = 0;

	while (i < n) {
		if (v[i] == 0 || v[i] == 1) {
			ret += i;
			++es0o1;
		}
		else if (v[i] < 1) {
			ret += decimal + es0o1;
			++decimal;
		}
		else {
			ret += mayor1 + es0o1;
			++mayor1;
		}
		++i;
	}

	return ret;
}

bool resuelve() {
	int n;
	cin >> n;
	if (n == 0)
		return false;

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	cout << resuelveCaso(v, n) << "\n";

	return true;
}

int main() {
	while (resuelve());
	return 0;
}