#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;

        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin>>nums[i];
        }


        unordered_set<int> distinct(nums.begin(), nums.end());

        sort(nums.begin(), nums.end());

        int ans = 0;
        for(int current : distinct){


            int counter = 0;
            
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] == current){

                    counter++;

                }
            }

            if(counter > current){
                ans = ans + counter - current;
            } if(counter < current){
                ans = ans + counter;
            }
        }

        cout << ans << "\n";

    }

}