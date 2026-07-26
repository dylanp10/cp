#include<bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){


        int n;
        cin >> n;
        long long ans = 0;

        for (int i = 1; i <= n; i++) {

            for (int k = 1; k <= n; k++) {

                int g = gcd(i, k);
                int x = i / g;
                int y = k / g;

                for (int j = 1; j <= n; j++) {


                    if (gcd(j, x) == 1 && gcd(j, y) == 1)
                        ans++;
                }
            }
        }

        cout << ans << "\n";


    }
}