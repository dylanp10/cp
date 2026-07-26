#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){

        int n;
        cin >> n;
        vector<int>p(n+1);

        for(int i = 1; i <=n; i+=2){
            p[i] = i+1;
            p[i+1] = i;

        }

        for(int i = 1; i <=n; i++){
            cout << p[i] << " ";
        }
        cout << "\n";


    }


}