#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){

        long long x;
        cin >> x;

        long long common = x/2;
        if(common == 0){
            cout << -1 << "\n";
            continue;
        }
        if (x % 2) {
            cout << -1 << '\n';
            continue;
        }


        if(x & common) {
            cout << -1 << "\n";
            continue;
        }

        long long a = x | common;
        long long b = common;

        cout << a << " " << b << "\n";




    }


}