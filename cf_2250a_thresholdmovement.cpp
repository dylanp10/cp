#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){

        int n;
        cin >> n;

        vector<int> w(n+1);
        for(int i = 1; i <=n ; i++){
            cin >> w[i];
        }


        if(n%2 != 0){
            cout << "NO\n";
        } else{

            int maxeven = -1;
            int minodd = 1000000001;

            for(int i = 1; i <=n; i++){
                if(i%2 == 1){
                    if(w[i] < minodd){
                        minodd = w[i];
                    }
                } else {

                    if(w[i] > maxeven){
                        maxeven = w[i];
                    }
                }
            }


            if(minodd - maxeven >= 2){
                cout << "YES\n";
            } else{
                cout << "NO\n";
            }





        }








    }

}