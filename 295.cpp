#include <iostream>

using namespace std;

//Un numero elevado a otro
//a, b, k
//a = 1
//b = 2
//k = 0

// a== b^k
// 0(n^k logn) --> O(logn)
long long eleva(long long a, long long b) {
	//Caso base
	if (b == 0) {
		return 1;
	}

	//Caso recursivo
	long long aux = eleva(a, b / 2);
	long long ret = aux * aux;

	if (b % 2 == 1)
		ret *= a;

	return ret%31543;
}


bool resuelve() {
	long long x, n;
	cin >> x >> n;
	if (x == 0 && n == 0)
		return false;

	cout << eleva(x, n) << "\n";

	return true;
}

int main() {
	while (resuelve());
	return 0;
}