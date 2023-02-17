#include <iostream>

using namespace std;

long long int v[100000];

//{ Pre: 0 <= n < longitud(v) }
long long int resuelveCaso(long long int v[], long long int n) {
	long long int sumatorio = 0, resultado = 0;

	for (int i = 0; i < n; ++i) {
		sumatorio += v[i];
	}

	for (int i = 0; i < n; ++i) {
		resultado += (sumatorio - v[i]) * v[i];
		sumatorio -= v[i];
	}
	return resultado;
}
//{ Post: ret = Sum i : 0 <= i < n : v[i]* Resto(v, i, n)
//donde 
//Resto(v,a,b) = Mul j : a < j < b : v[j]

bool resuelve() {
	long long int n, resultado;
	cin >> n;
	if (n == 0)
		return false;
	 
	for (int i = 0; i < n; ++i)
		cin >> v[i];

	resultado = resuelveCaso(v, n);

	cout << resultado << "\n";


	return true;

}

int main() {
	while (resuelve());
	return 0;
}