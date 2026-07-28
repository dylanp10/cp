#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        for(int i = 1; i <= n; i++){
            for(int j = i+1; j <= n; j++){

                int d = j-i;

                if(n%2 ==1){
                    if(d<= (n-1) /2)
                        cout << 1 << " ";
                     else
                        cout << -1 << " ";
                } else {

                    if(d == n / 2)
                        cout << 0 << " ";
                    else if (d < n /2)
                        cout << 1 << " ";
                    else 
                        cout << -1 << " ";
                }




            }
        }

        cout << "\n";


    }

}