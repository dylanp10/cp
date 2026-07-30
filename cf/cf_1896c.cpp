#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	while(t--){

		int n, x;
		cin >> n >> x;
		vector<int> a(n);
		vector<int> b(n);

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		for(int i = 0; i < n; i++){
			cin >> b[i];
		}

		vector<pair<int,int>> A;

		for(int i = 0; i < n; i++){

			A.push_back({a[i], i});
		}

		sort(A.begin(), A.end());
		sort(b.begin(), b.end());

		vector<int> ans(n);


		for(int i = 0; i < x; i++){
			ans[A[n-x+i].second] = b[i];
		}

		for(int i = 0; i < n - x; i++){
			ans[A[i].second] = b[x+i];
		}


		int beauty = 0;
		for(int i = 0; i < n; i++){
			if(a[i] > ans[i]){
				beauty++;
			}
		}

		if(beauty != x){
			cout << "NO\n";
		} else {
			cout << "YES\n";

			for(int i = 0; i < n; i++){
				cout << ans[i] << " ";
			}
			cout << "\n";
		}



	}


}