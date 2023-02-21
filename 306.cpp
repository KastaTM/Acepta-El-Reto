#include <iostream>

using namespace std;

struct sol {
	long long int v[2][2] = { { 0, 1 }, { 1, 1 } };
	long long int n;
};
const int K = 46337;

sol operator*(sol s1, sol s2) {
	sol ret;
	long long int a11 = (s1.v[0][0] * s2.v[0][0] + s1.v[0][1] * s2.v[1][0]) % K;
	long long int a12 = (s1.v[0][0] * s2.v[0][1] + s1.v[0][1] * s2.v[1][1]) % K;
	long long int a21 = (s1.v[1][0] * s2.v[0][0] + s1.v[1][1] * s2.v[1][0]) % K;
	long long int a22 = (s1.v[1][0] * s2.v[0][1] + s1.v[1][1] * s2.v[1][1]) % K;


	ret.v[0][0] = a11;
	ret.v[0][1] = a12;
	ret.v[1][0] = a21;
	ret.v[1][1] = a22;
	return ret;
};

sol resuelve(long long int n) {
	sol s1, mitad, aux;
	if (n == 2) {
		s1.v[0][0] = 1;
		s1.v[0][1] = 1;
		s1.v[1][0] = 1;
		s1.v[1][1] = 2;
		return s1;
	}
	else if (n == 1) {
		s1.v[0][0] = 0;
		s1.v[0][1] = 1;
		s1.v[1][0] = 1;
		s1.v[1][1] = 1;
		return s1;
	}
	else {
		mitad = resuelve(n / 2);
		if (n % 2 == 0) {
			return (mitad * mitad);
		}
		else {
			aux.v[0][0] = 0;
			aux.v[0][1] = 1;
			aux.v[1][0] = 1;
			aux.v[1][1] = 1;
			return (mitad * mitad) * aux;
		}
	}
}

bool resuelveCaso() {
	long long int n;
	cin >> n;
	if (n == 0) {
		return false;
	}
	else {
		cout << resuelve(n).v[0][1] << '\n';
	}
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}