#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

        long long n;
        cin >> n;

        bool found = false;

        for(long long b = 0; b <= 100000; b+= 12){
            long long a = n-b;
            if(a<0)
                break;

            long long x = a;
            long long reverse = 0;

            while (x>0){
                reverse = reverse * 10 + x % 10;
                x = x/10;
            }

            if(reverse == a){

                cout << a << " " << b << "\n";
                found = true;
                break;
            }
        }

        if(!found)
            cout << -1 << "\n";
       
    }
}