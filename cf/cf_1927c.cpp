#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){

        int n, m, k;
        cin >> n >> m >> k;

        vector<bool> a(k+1, false), b(k+1, false);

        for(int i = 0; i < n; i++){

            int x;
            cin >> x;
            if(x <= k){
                a[x] = true;
            }
        }

        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            if(x <= k){
                b[x] = true;
            }
        }

        int onlya = 0;
        int onlyb = 0;

        bool ok = true;



        for(int i = 1; i <= k; i++){
            if(!a[i] && !b[i]){
                ok = false;
                break;
            }

            if(a[i]&& !b[i]){
                onlya++;
            }
            if(!a[i] && b[i]){
                onlyb++;
            }

        }


        if(!ok || onlya > k/2 || onlyb > k/2){
            cout << "no\n";
        } else {
            cout << "yes\n";
        }


    }



}