#include <iostream>
#include <algorithm>

using namespace std;

int v[200000];

long long int resuelveCaso(int v[], int n, int k) {
	long long int i = 0, j = n - 1;
	long long int parejas = 0;
	while (i < j) {
		if (v[i] + v[j] <= k) {
			parejas += (j - i);
			++i;
		}
		else
			--j;
	}
	return parejas;
}


bool resuelve() {
	int n, k;
	cin >> n >> k;	
	if (n == 0 && k == 0)
		return false;

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	sort(v, v + n);
	cout << resuelveCaso(v,n,k) << "\n";
	
	return true;
}

int main() {
	while (resuelve());
	return 0;
}