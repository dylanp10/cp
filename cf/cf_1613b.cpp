#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--){

        // int n;
        // cin >> n;

        // vector<int> nums(n);
        // for(int i = 0; i < n; i++){
        //     cin >> nums[i];
        // }

        // int pairs = n/2;
        // int count = 0;

        // for(int i = 0; i < n && count < pairs; i++){
        //     for(int j = 0; j < n && count < pairs; j++){

        //         if(j == i){
        //             continue;
        //         }

        //         int res = nums[i]%nums[j];
        //         bool possible = true;

        //         for(int k = 0; k < n; k++){
        //             if(nums[k] == res){
        //                 possible = false;
        //                 break;
        //             }
        //         }

        //         if(possible){
        //             cout << nums[i] << " " << nums[j] << "\n";
        //             count++;

        //         }



        //     }
        // }


        int n;
        cin >> n;

        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        for(int i = 1; i <= n/2; i++){
            cout << nums[i] << " " << nums[0] << "\n";
        }



    }

}
