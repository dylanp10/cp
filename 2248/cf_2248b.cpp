#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
    	int n, m;
    	cin >> n >> m;

    	vector<long long> a(n), b(m);

    	for(int i = 0; i < n; i++){
    		cin >> a[i];
    	}

    	for(int i = 0; i < m; i++){
    		cin >> b[i];
    	}


    	if(n < 2*m){
	    	cout << "no\n";
	    	continue;
    	}

    	sort(a.begin(), a.end());
    	sort(b.begin(), b.end());

    	bool ok = true;

    	for(int i = 0; i < m; i++){

    		int low = lower_bound(a.begin(), a.end(), b[i]) - a.begin();

    		if(low < i+1){
    			ok = false;
    			break;
    		}

    		if(low > n - m + i){
    			ok = false;
    			break;
    		}
    	}



    	if(ok){
    		cout << "yes\n";
    	} else {
    		cout << "no\n";
    	}
    }
	

}