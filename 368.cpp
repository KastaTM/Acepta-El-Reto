#include <iostream>

using namespace std;

bool resolver() {
    int h, c, ollas, min;
    cin >> h >> c;
    if (h == 0 && c == 0)
        return false;
    else {
        int ollas = h / c;
        if (h % c > 0)
            ollas++;
        int min = 10 * ollas;
        cout << min << "\n";
        return true;
    }
}

int main() {
	while (resolver()) {
	}
	return 0;
}