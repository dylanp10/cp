#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

    	int n;
    	cin >> n;

    	vector<int> a(2*n);
    	for(int i = 0; i < 2*n; i++){
    		cin >> a[i];
    	}

    	vector<int> first(n+1, -1), second(n+1, -1);

    	for(int i = 0; i < 2*n; i++){
    		int v = a[i];

    		if(first[v] == -1){
    			first[v] = i;
    		} else {
    			second[v] = i;
    		}
    	}


    	vector<vector<long long>> intervals;

    	for(int v = 1; v <= n; v++){



    	int l = first[v];
    	int r = second[v];

    	long long length = r - l + 1;

    	intervals.push_back({l, r, length*(length-1)});
    	}



		sort(intervals.begin(), intervals.end(), [](vector<long long>& a, vector<long long>& b){
		    return a[1] < b[1];
		});

    	vector<int> rights(n);

    	for(int i = 0; i < n; i++){
    		rights[i] = intervals[i][1];
    	}


    	vector<long long> dp(n+1, 0);

    	for(int i = 1; i <= n; i++){

    		int left = intervals[i-1][0];

    		long long weight = intervals[i-1][2];

    		int before = 0;

    		int low = 0;
    		int high = i-1;

    		while(low < high){

    			int middle = (low + high)/2;


    			if(rights[middle] < left){
    				low = middle + 1;
    			} else {
    				high = middle;

    			}

    		}


    		before = low;


    		long long take = dp[before] + weight;
    		long long skip = dp[i-1];

    		dp[i] = max(take, skip);
    	}






    	cout << dp[n] + 2*n << "\n";



    }

}