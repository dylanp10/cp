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
        vector<int> a(n);
        for(int i = 1; i <=n-1; i++){
            cin >> a[i];
        }



        int m = 0;
        for(int i = 1; i <=n-1; i++){
            m = max(m, a[i]);
        }

        if(m != n-1){
            cout << 0 << "\n";
            continue;
        }


        int high = 0;
        for(int i = 1; i <= n-1; i++){
            if(a[i] == m ){

                high = i;
            }
        }

        bool possible = true;
        for(int i = 1; i<high; i++){
            if(a[i] > a[i+1]){
                possible = false;
            }
        }

        for(int i = high; i <= n-2; i++){
            if(a[i] < a[i+1]){
                possible = false;
            }
        }

        if(!possible){
            cout << 0 << "\n";
            continue;
        }



        int low = high;
        while(low > 1 && a[low - 1] == m){
            low --;
        }


        vector<int> forcedval;
        vector<int> freeval;






        int prevm = 0;
        for(int i = 1; i <= low-1; i++){
            
            if(a[i] > prevm){

                forcedval.push_back(a[i]);
                prevm = a[i];
            } else{


                freeval.push_back(a[i]);
            }
        }





        prevm = 0;
        for(int i = n-1; i >= high + 1; i--){
            
            if(a[i] > prevm){

                forcedval.push_back(a[i]);
                prevm = a[i];
            } else {

                freeval.push_back(a[i]);
            }
        }



        int countmid = high - low;
        for(int i = 0; i < countmid; i++){
            freeval.push_back(m);
        }



        vector<char> isused(n+1, 0);
        bool duplicate = false;
        for(int i = 0; i < forcedval.size(); i++){
            int value = forcedval[i];

            if(isused[value]){

                duplicate = true;
                break;
            }

            isused[value] = 1;
        }

        isused[n] = 1;
        isused[n-1] = 1;

        if(duplicate) {

            cout << 0 << "\n";
            continue;
        }





        vector<int> prefixused(n +1, 0);

        for(int i = 1; i <= n; i++){
            prefixused[i] = prefixused[i - 1] + isused[i];
        }

        sort(freeval.begin(), freeval.end());

        long long ways = 1;
        bool ok = true;

        for(int i = 0; i < freeval.size(); i++){

            int bound =freeval[i];

            long long avaliable;
            if (bound <= 1){
                avaliable = 0;
            } else{

                avaliable = (bound -1) - prefixused[bound - 1];
            }

            long long choices = avaliable - i;

            if(choices <= 0){
                ok = false;
                break;
            }

            ways = (ways * choices) % 998244353;

            
        }

        if(!ok) {
            cout << 0 << "\n";
            continue;
        }

        long long answer = (2*ways) % 998244353;
        cout << answer << "\n";



    }
}