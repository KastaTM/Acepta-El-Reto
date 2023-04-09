#include <iostream>

using namespace std;

const int MAX = 100000;
int v[MAX];

//{ Pre : (1 <= n <= longitud(v)) }
int resuelve(int v[], int n, int s) {/*return ret*/
	int ret = 0, i = 0, aux = 0;

	// { I:
	// (0 <= a <= n) ^
	// ret = # i : (0 <= i <= j < n)   : (aux = s) ^ (s = 0)
	// aux = SUM i : (0 <= i < n) : v[i]
	// s = SUM i : (0 <= i < n) : s - v[i]
	// }
	if (s == 0) {
		ret++;
	}
	while (i < n) {
		aux += v[i];
		s -= v[i];
		if (aux == s) {
			ret++;
		}
		i++;
	}
	return ret;
}
//{ Post : ret = # i : (0 <= i <= j < n)   : (aux = s) ^ (s = 0)
//donde
// aux = SUM i : (0 <= i < n) : v[i]
// s = SUM i : (0 <= i < n) : s -v[i]
// }

bool resuelveCaso() {
	int movimientos, sumatorio = 0;
	cin >> movimientos;
	if (movimientos == 0) {
		return false;
	}
	else {
		for (int i = 0; i < movimientos; i++) {
			cin >> v[i];
			sumatorio += v[i];
		}
		cout << resuelve(v, movimientos, sumatorio) << endl;
	}
	return true;
}

int main() {
	while (resuelveCaso()) {}
	return 0;
}