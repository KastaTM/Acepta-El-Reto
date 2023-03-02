#include <iostream>

using namespace std;

int v[200000];

// {Pre : (1 <= n <= longitud(v) ^ordenado (v) }
int resuelveCaso(int v[], int n, int k) {
	int a = 0, b = 1, ret = b - a;

	//	{I:
	//		(0 <= a < b <= n)
	//		ret = max i,j : (0 <= i <= j < b) ^ (v[j] - v[i] < k) : j - i + 1
	//		a = min i : (0 <= i < b) ^(v[b-1] - v[i] < k) : i
	//	} 
	while (b < n) {
		if (v[b] - v[a] < k)
			++b;
		else 
			++a;
		if (ret < b - a) {
			ret = b - a;
		}
	}
	return ret;
}
//{ Post: ret = max i,j : (0 <= i <= j < n) ^ (v[j] - v[i] < k) : j - i + 1 }

bool resuelve() {
	int n, a;
	cin >> n >> a;
	if (n == 0 && a == 0)
		return false;

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	int resultado = resuelveCaso(v,n,a);

	cout << resultado << "\n";

	return true;
}

int main() {
	while (resuelve());
	return 0;
}