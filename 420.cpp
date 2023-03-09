#include <iostream>

using namespace std;

int v[250000];

//{Pre: 0 <= n <= longitud(v) ^ }
int resuelveCaso(int v[], int n, int k){
	int a = 0, b = 0, ret = 0, sum = 0;

	while (b < n || sum > k) {
		if (sum < k) {
			sum += v[b];
			++b;
		}
		else {
			sum -= v[a];
			++a;
		}
		if(sum == k) {
			++ret;
		}
	}

	return ret;
}
//{Post: 
// ret = # i, j: 0 <= i <= j <= n :suma(v,i,j) = k
// donde
// suma(v,a,b) : Sum i : a <= i <= b : v[i]

void resuelve() {
	int n;
	string numero;
	cin >> n >> numero;
		for (int j = 0; j < numero.size(); ++j) {
			v[j] = numero[j] - '0';
		}
		int solucion = resuelveCaso(v, numero.size(), n);
		cout << solucion << "\n";

}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelve();
	}
	return 0;
}