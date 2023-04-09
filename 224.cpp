#include <iostream>

using namespace std;

const int MAX = 200000;
int v[MAX];

//{ Pre : 1 <= n <= longitud(v) }
int resuelve(int v[], int n) {/*return ret*/
	int ret = -1, a = n - 1, sumatorio = 0;

	// { I :
	// (0 <= i < j <= n) ^
	//{ Post : ret = Existe i : 0 <= i < n : v[i - 1] = sumatorio(v,n) 
	// sumatorio(v,n) = SUM j : 0 <= j < n : v[j] }
	// }
	while (a > 0) {
		sumatorio += v[a];
		if (v[a - 1] == sumatorio) {
			ret = a;
		}
		a--;
	}
	return ret;
}
//{ Post : ret = Existe i : 0 <= i < n : v[i - 1] = sumatorio(v,n)
//donde 
// sumatorio(v,n) = SUM j : 0 <= j < n : v[j] }

bool resuelveCaso() {
	int bocatas, solucion;
	cin >> bocatas;
	if (bocatas == 0) {
		return false;
	}
	else {
		for (int i = 0; i < bocatas; i++) {
			cin >> v[i];
		}
		solucion = resuelve(v, bocatas);
		if (solucion == -1) {
			cout << "NO" << endl;
		}
		else {
			cout <<"SI "<< solucion<< endl;
		}
	}
	return true;
}

int main() {
	while (resuelveCaso()) {}
	return 0;
}