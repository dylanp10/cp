#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        t = t - 1;

        int n;
        cin >> n;

        vector<long long> a(n);
        vector<long long> b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long sumA = 0;
        long long sumB = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            sumA = sumA + a[i];
            sumB = sumB + b[i];

            if (sumB < sumA) {
                possible = false;
            }
        }

        if (possible) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}