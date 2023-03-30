#include <iostream>

using namespace std;

int meses[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
    int n, d, m, res, i;
    cin >> n;
    while (n > 0) {
        cin >> d >> m;
        res = meses[m - 1] - d;
        for (i = m; i < 12; ++i) {
            res = res + meses[i];
        }
        cout << res << "\n";
        --n;
    }
    return 0;
}