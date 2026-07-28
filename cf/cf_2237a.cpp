#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;

        vector<int> height(n);
        for(int i = 0; i < n; i++){

            cin >> height[i];
        }

        int ans = height[0];
        int minheight = ans;

        for(int i = 1; i < n; i++){
            if(height[i] > minheight)
                ans += minheight;
            else{
                minheight = height[i];
                ans += minheight;
            }
        }

        cout << ans << "\n";

    }
}