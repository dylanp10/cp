
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int iterations;
    cin >> iterations;
 
 
    for(int i = 0; i < iterations; i++){
 
        int k;
        cin >> k;
        vector<int> frequency(k);
        
        for(int i = 0; i < k; i++){
            cin >> frequency[i];
        }
        sort(frequency.begin(), frequency.end(), greater<int>());
        if (frequency[0] >= 3 || (k >= 2 && frequency[0] >= 2 && frequency[1] >= 2)) {
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
 
 
    }
}