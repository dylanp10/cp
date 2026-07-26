#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){


        int n, m, k;
        cin >> n >> m >> k;
        vector<int> right(m);
        vector<int> left(n);

        for(int i = 0; i < n; i++){
            cin >> left[i];
        }
        for(int i = 0; i < m; i++){
            cin >> right[i];
        }
        int counter = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(right[j] + left[i] <= k){
                    counter++;
                }
            }
        }

        cout << counter << "\n";
    }

}