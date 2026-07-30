#include<bits/stdc++.h>
using namespace std;

int main() {

    int n = 6000000;

    vector<bool> prime(n+1, true);
    prime[0] = false;
    prime[1] = false;

    for(int i = 2; i * i <= n; i++){
        if(prime[i]){
            for(int j = i*i; j <= n; j+= i){
                prime[j] = false;
            }
        }
    }


    vector<int> primes;
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            primes.push_back(i);
            if(primes.size() == 400000){
                break;
            }
        }
    }

    vector<long long> primesum(400001, 0);

    for(int i = 0; i < 400000; i++){
       primesum[i+1] = primesum[i] + primes[i];
    }
    

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        long long sum = 0;
        int keep = 0;

        for(int i = 0; i < n; i++){

            sum = sum + a[i];

            if(sum >= primesum[i+1]){
                keep = i+1;
            }
        }


        cout << n - keep << "\n";





    }


}