#include<bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>> a[i];
        }

        map<string, long long> firsttwo;
        map<string, long long> firstthird;
        map<string, long long> lasttwo;
        map<string, long long> whole;

        long long ans = 0;

        for(int i = 0; i < n-2; i++){

            int x = a[i];
            int y = a[i+1];
            int z = a[i+2];

            string s1 = to_string(x) + "." + to_string(y);
            string s2 = to_string(x) + "." + to_string(z);
            string s3 = to_string(y) + "." + to_string(z);
            string s4 = to_string(x) + "." + to_string(y) + "." + to_string(z);

            ans = ans + firsttwo[s1] - whole[s4];
            ans = ans + firstthird[s2] - whole[s4];
            ans = ans + lasttwo[s3] - whole[s4];

            firsttwo[s1]++;
            firstthird[s2]++;
            lasttwo[s3]++;
            whole[s4]++;
        }

        cout << ans << "\n";


    }

}