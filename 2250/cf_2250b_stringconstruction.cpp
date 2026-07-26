#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        if(k == n-1){
            cout << -1 << "\n";
        } else{

            int m = n-k;

            int blocksa = 0;
            int blocksb = 0;

            for(int i = 0; i < m; i++){
                if(i%2 == 0){
                    blocksa++;
                } else{
                    blocksb++;
                }
            }

            int targeta = (n+1)/2;
            int targetb = n/2;

            int extraa = targeta - blocksa;
            int extrab = targetb - blocksb;

            vector<int> blocksize(m, 1);

            blocksize[0] = blocksize[0] + extraa;
            if(m>1){
                blocksize[1] = blocksize[1] + extrab;
            }

            string answer = "";

            for(int i = 0; i < m; i++){
                char current;
                if(i%2 == 0){
                    current = '0';
                } else {
                    current = '1';
                }



                for (int j  = 0; j < blocksize[i]; j++){
                    answer.push_back(current);
                }
            }

            cout << answer << "\n";
        }




    }

}
